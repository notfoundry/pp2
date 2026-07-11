"""Bool type: literals, the unary/binary methods, stringization and type.

`not` is a nullary method call (`true not()`); `and`/`or`/`xor` take one
argument and chain left-associatively like every other method.
"""
import pytest


@pytest.mark.parametrize("body,expected", [
    # literals stringize to themselves
    ("print(true)", "true"),
    ("print(false)", "false"),
    # not (nullary method)
    ("print(true not())", "false"),
    ("print(false not())", "true"),
    ("print(true not() not())", "true"),
    # and
    ("print(true and (true))", "true"),
    ("print(true and (false))", "false"),
    ("print(false and (false))", "false"),
    # or
    ("print(true or (false))", "true"),
    ("print(false or (false))", "false"),
    ("print(false or (true))", "true"),
    # xor
    ("print(true xor (true))", "false"),
    ("print(true xor (false))", "true"),
    ("print(false xor (false))", "false"),
    # left-associative chaining
    ("print(true and (true) and (false))", "false"),
    ("print(true and (false) or (true))", "true"),
])
def test_bool_ops(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == expected


def test_bool_bound_to_variable(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(B (true), print(B and (false)))") == "false"


def test_bool_type_introspection(pp):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print(true type))") == "Bool"
