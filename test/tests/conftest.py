from multiprocessing import ProcessError
import re
import shlex
import tempfile
import subprocess

import pytest


PREPROCESSOR_FLAG_NAME = '--c-preprocessor'


class Preprocessor:
    def __init__(self, test_file, pp_command):
        self.test_file = test_file
        self.pp_command = pp_command
        self.directives = []
    
    def include(self, path, *args, **kwargs):
        path = path if path.startswith('<') else '"{}"'.format(path)
        path = path.format(*args, **kwargs)
        self.directives.append("#include {}".format(path))

    def define(self, macro_name_and_replacement_list, *args, **kwargs):
        macro_name_and_replacement_list = macro_name_and_replacement_list.format(*args, **kwargs)
        self.directives.append("#define {}".format(macro_name_and_replacement_list))
    
    def undef(self, macro_name, *args, **kwargs):
        macro_name = macro_name.format(*args, **kwargs)
        self.directives.append("#undef {}".format(macro_name))
    
    def expand(self, token_sequence, *args, **kwargs):
        token_sequence = token_sequence.format(*args, **kwargs)
        self.directives.append(token_sequence)

        self.test_file.seek(0)
        self.test_file.write("\n".join(self.directives))
        self.test_file.flush()
        
        p = subprocess.run(self.pp_command + [self.test_file.name], stdout=subprocess.PIPE, stderr=subprocess.PIPE)
        p.check_returncode()
        if p.stderr:
            raise subprocess.SubprocessError(p)

        r = str(p.stdout, "utf-8")
        return self.parse(r)
    
    def parse(self, r, *args, **kwargs):
        r = r.format(*args, **kwargs)
        r = re.sub(r"([\(\)\,])", r" \1 ", r)
        r = re.sub(r"\s+", " ", r)
        r = r.strip()
        return r

@pytest.fixture()
def pp(pytestconfig):
    pp_command = pytestconfig.getoption(PREPROCESSOR_FLAG_NAME)
    pp_command = shlex.split(pp_command)
    with tempfile.NamedTemporaryFile("w", suffix='.h') as test_file:
        yield Preprocessor(test_file, pp_command)


def pytest_addoption(parser):
    parser.addoption(PREPROCESSOR_FLAG_NAME, action="store", required=True, help="command line string to invoke preprocessor")
