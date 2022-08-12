# CMake generated Testfile for 
# Source directory: /github/workspace/test
# Build directory: /github/workspace/build/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(/github/workspace/test/tests/primitive/test_core_primitives.py "pytest" "--c-preprocessor" "/usr/bin/c++ -E -P -I/github/workspace/include" "/github/workspace/test/tests/primitive/test_core_primitives.py")
set_tests_properties(/github/workspace/test/tests/primitive/test_core_primitives.py PROPERTIES  _BACKTRACE_TRIPLES "/github/workspace/test/CMakeLists.txt;6;add_test;/github/workspace/test/CMakeLists.txt;0;")
