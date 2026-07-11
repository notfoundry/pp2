"""In-language variables, including multi-character names via `var (...)`.

A variable's address is its name spelled as a char-seq, compared character by
character, so there is no fixed slot table and no limit on distinct names. The
built-in single letters (a-z, A-Z) address a one-character seq; the `var (...)`
keyword names a variable inline as a run of space-separated characters:

    var (t o t a l) (5)         assign 5 to total
    print(var (t o t a l))      read it back

The name is converted to the address (t)(o)(t)(a)(l) at compile time (see
PP2_SPACED in name.h), so `var (...)` costs no more at run time than a letter.
A name may also be declared host-side with PP2_VAR; the two spellings produce
the same address and therefore the same variable.
"""
import pytest


BIND_CASES = [
    # a single-character name is the same variable as the bare letter
    ("var (x) (5), print(var (x))", "5"),
    ("var (x) (5), print(x)", "5"),
    ("x (5), print(var (x))", "5"),
    # multi-character names
    ("var (t o t a l) (5), print(var (t o t a l))", "5"),
    ("var (c o u n t) (10), print(var (c o u n t))", "10"),
    # digits, underscore and mixed case are all admissible name characters
    ("var (n 2) (7), print(var (n 2))", "7"),
    ("var (_ x) (3), print(var (_ x))", "3"),
    ("var (F o o) (8), print(var (F o o))", "8"),
    # assignment is update-in-place; the latest value is read
    ("var (c o u n t) (10), var (c o u n t) (42), print(var (c o u n t))", "42"),
    # one variable may name another in its right-hand side
    ("var (a) (4), var (b) (var (a) plus (1)), print(var (b))", "5"),
    # a var is an ordinary receiver for a method call
    ("var (s u m) (5), print(var (s u m) plus (3))", "8"),
    # a var holds a Long like any other value
    ("var (b i g) ((2)(5)(6)), print(var (b i g))", "256"),
    ("var (b i g) ((2)(5)(6)), print(var (b i g) plus (var (b i g)))", "512"),
]


@pytest.mark.parametrize("body,expected", BIND_CASES)
def test_var(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == expected


DISTINCT_CASES = [
    # names that share a prefix are still different addresses
    ("var (n) (2), var (n u m) (9), print(var (n)), print(var (n u m))", "2 9"),
    ("var (t o t) (1), var (t o t a l) (2), print(var (t o t))", "1"),
    # two independent names do not collide
    ("var (x y z) (7), var (a b c) (8), print(var (x y z)), print(var (a b c))",
     "7 8"),
]


@pytest.mark.parametrize("body,expected", DISTINCT_CASES)
def test_names_are_distinct(pp, body, expected):
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2({})", body) == expected


def test_multichar_name_does_not_bind_its_first_letter(pp):
    # var (x y z) addresses (x)(y)(z), which is nothing to do with the letter x
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(var (x y z) (7), print(var (x y z)), print(x))") == \
        pp.parse("7 8PP2_LANGUAGE_UNBOUND_LOCAL_EXCEPTION((x))")


def test_reading_an_unbound_var_throws_with_its_char_seq(pp):
    # the address carried by the exception is the name spelled out
    pp.include("pp2/pp2.h")
    assert pp.expand("PP2(print(var (z z z)))") == \
        pp.parse("8PP2_LANGUAGE_UNBOUND_LOCAL_EXCEPTION((z)(z)(z))")


def test_var_and_host_declared_name_are_the_same_slot(pp):
    # PP2_VAR declares the same name host-side; both reach the one address
    pp.include("pp2/pp2.h")
    pp.define("PP2_DEF_total PP2_VAR(t,o,t,a,l)")
    # write through the host name, read through the keyword
    assert pp.expand("PP2(total (5), print(var (t o t a l)))") == "5"
    # write through the keyword, read through the host name
    assert pp.expand("PP2(var (t o t a l) (9), print(total))") == "9"
