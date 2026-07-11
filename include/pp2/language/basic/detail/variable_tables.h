/** @file */
#ifndef PP2_LANGUAGE_BASIC_DETAIL_VARIABLE_TABLES_H
#define PP2_LANGUAGE_BASIC_DETAIL_VARIABLE_TABLES_H

/* The built-in single-letter variables. A variable's address is now a char-seq
 * (the same paren-per-character shape used elsewhere), so `x` addresses slot
 * (x) and the reserved `this` addresses (t)(h)(i)(s). Multi-character names are
 * declared host-side with PP2_VAR (see variable.h); there is no longer a fixed
 * slot table, only these convenience bindings for the letters. */

#define PP2_DEF_a )PP2_COMPILE_LANGUAGE_VAR((a),
#define PP2_DEF_b )PP2_COMPILE_LANGUAGE_VAR((b),
#define PP2_DEF_c )PP2_COMPILE_LANGUAGE_VAR((c),
#define PP2_DEF_d )PP2_COMPILE_LANGUAGE_VAR((d),
#define PP2_DEF_e )PP2_COMPILE_LANGUAGE_VAR((e),
#define PP2_DEF_f )PP2_COMPILE_LANGUAGE_VAR((f),
#define PP2_DEF_g )PP2_COMPILE_LANGUAGE_VAR((g),
#define PP2_DEF_h )PP2_COMPILE_LANGUAGE_VAR((h),
#define PP2_DEF_i )PP2_COMPILE_LANGUAGE_VAR((i),
#define PP2_DEF_j )PP2_COMPILE_LANGUAGE_VAR((j),
#define PP2_DEF_k )PP2_COMPILE_LANGUAGE_VAR((k),
#define PP2_DEF_l )PP2_COMPILE_LANGUAGE_VAR((l),
#define PP2_DEF_m )PP2_COMPILE_LANGUAGE_VAR((m),
#define PP2_DEF_n )PP2_COMPILE_LANGUAGE_VAR((n),
#define PP2_DEF_o )PP2_COMPILE_LANGUAGE_VAR((o),
#define PP2_DEF_p )PP2_COMPILE_LANGUAGE_VAR((p),
#define PP2_DEF_q )PP2_COMPILE_LANGUAGE_VAR((q),
#define PP2_DEF_r )PP2_COMPILE_LANGUAGE_VAR((r),
#define PP2_DEF_s )PP2_COMPILE_LANGUAGE_VAR((s),
#define PP2_DEF_t )PP2_COMPILE_LANGUAGE_VAR((t),
#define PP2_DEF_u )PP2_COMPILE_LANGUAGE_VAR((u),
#define PP2_DEF_v )PP2_COMPILE_LANGUAGE_VAR((v),
#define PP2_DEF_w )PP2_COMPILE_LANGUAGE_VAR((w),
#define PP2_DEF_x )PP2_COMPILE_LANGUAGE_VAR((x),
#define PP2_DEF_y )PP2_COMPILE_LANGUAGE_VAR((y),
#define PP2_DEF_z )PP2_COMPILE_LANGUAGE_VAR((z),
#define PP2_DEF_A )PP2_COMPILE_LANGUAGE_VAR((A),
#define PP2_DEF_B )PP2_COMPILE_LANGUAGE_VAR((B),
#define PP2_DEF_C )PP2_COMPILE_LANGUAGE_VAR((C),
#define PP2_DEF_D )PP2_COMPILE_LANGUAGE_VAR((D),
#define PP2_DEF_E )PP2_COMPILE_LANGUAGE_VAR((E),
#define PP2_DEF_F )PP2_COMPILE_LANGUAGE_VAR((F),
#define PP2_DEF_G )PP2_COMPILE_LANGUAGE_VAR((G),
#define PP2_DEF_H )PP2_COMPILE_LANGUAGE_VAR((H),
#define PP2_DEF_I )PP2_COMPILE_LANGUAGE_VAR((I),
#define PP2_DEF_J )PP2_COMPILE_LANGUAGE_VAR((J),
#define PP2_DEF_K )PP2_COMPILE_LANGUAGE_VAR((K),
#define PP2_DEF_L )PP2_COMPILE_LANGUAGE_VAR((L),
#define PP2_DEF_M )PP2_COMPILE_LANGUAGE_VAR((M),
#define PP2_DEF_N )PP2_COMPILE_LANGUAGE_VAR((N),
#define PP2_DEF_O )PP2_COMPILE_LANGUAGE_VAR((O),
#define PP2_DEF_P )PP2_COMPILE_LANGUAGE_VAR((P),
#define PP2_DEF_Q )PP2_COMPILE_LANGUAGE_VAR((Q),
#define PP2_DEF_R )PP2_COMPILE_LANGUAGE_VAR((R),
#define PP2_DEF_S )PP2_COMPILE_LANGUAGE_VAR((S),
#define PP2_DEF_T )PP2_COMPILE_LANGUAGE_VAR((T),
#define PP2_DEF_U )PP2_COMPILE_LANGUAGE_VAR((U),
#define PP2_DEF_V )PP2_COMPILE_LANGUAGE_VAR((V),
#define PP2_DEF_W )PP2_COMPILE_LANGUAGE_VAR((W),
#define PP2_DEF_X )PP2_COMPILE_LANGUAGE_VAR((X),
#define PP2_DEF_Y )PP2_COMPILE_LANGUAGE_VAR((Y),
#define PP2_DEF_Z )PP2_COMPILE_LANGUAGE_VAR((Z),

#define PP2_DEF_this )PP2_COMPILE_LANGUAGE_VAR((t)(h)(i)(s),

#endif
