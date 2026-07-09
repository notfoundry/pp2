/** @file */
#ifndef PP2_LANGUAGE_BASIC_SYMBOL_H
#define PP2_LANGUAGE_BASIC_SYMBOL_H

/**
* Equality of two registered symbols, yielding 1 or 0.
*
* The preprocessor cannot compare two arbitrary tokens. It can compare tokens
* that have been registered, and a symbol is registered by defining
* `PP2_SYM_<name>(...) __VA_ARGS__`. Every PP2 type name is registered next to
* its type definition.
*
* `sa (sb)` yields `sb` when the two differ. When they are the same symbol it
* yields `sa` painted blue, because a macro is disabled inside its own
* expansion, and a painted token never expands again. So only the live one goes
* on to eat the trailing `(0,1)`, and the arity of what comes back is the
* answer: two arguments when the symbols differ, one when they match.
*
* Both names must be registered. An unregistered name expands to nothing at all,
* which looks exactly like the painted case, so it reports equal. Only ever call
* this on names you know are registered.
*/
#define PP2_SYMBOL_EQ(a,b) IP2_SYMBOL_EQ_I(PP2_SYM_##a,PP2_SYM_##b)
#define IP2_SYMBOL_EQ_I(sa,sb) IP2_SYMBOL_EQ_II(sa (sb) (0,1))
#define IP2_SYMBOL_EQ_II(...) IP2_SYMBOL_EQ_PICK(__VA_ARGS__,0,1)
#define IP2_SYMBOL_EQ_PICK(_1,_2,_3,...) _3

#endif
