/* Test C2X width macros in <limits.h>.  */
/* { dg-do compile } */
/* { dg-options "-std=c2x" } */

#include <limits.h>

#define CHECK_WIDTH(TYPE, MAX, WIDTH)					\
  _Static_assert ((MAX >> ((TYPE) -1 < 0 ? (WIDTH - 2) : (WIDTH - 1))) == 1, \
		  "width must match type")

#ifndef CHAR_WIDTH
# error "missing CHAR_WIDTH"
#endif
CHECK_WIDTH (char, CHAR_MAX, CHAR_WIDTH);
#ifndef SCHAR_WIDTH
# error "missing SCHAR_WIDTH"
#endif
CHECK_WIDTH (signed char, SCHAR_MAX, SCHAR_WIDTH);
#ifndef UCHAR_WIDTH
# error "missing UCHAR_WIDTH"
#endif
CHECK_WIDTH (unsigned char, UCHAR_MAX, UCHAR_WIDTH);
#ifndef SHRT_WIDTH
# error "missing SHRT_WIDTH"
#endif
CHECK_WIDTH (signed short, SHRT_MAX, SHRT_WIDTH);
#ifndef USHRT_WIDTH
# error "missing USHRT_WIDTH"
#endif
CHECK_WIDTH (unsigned short, USHRT_MAX, USHRT_WIDTH);
#ifndef INT_WIDTH
# error "missing INT_WIDTH"
#endif
CHECK_WIDTH (signed int, INT_MAX, INT_WIDTH);
#ifndef UINT_WIDTH
# error "missing UINT_WIDTH"
#endif
CHECK_WIDTH (unsigned int, UINT_MAX, UINT_WIDTH);
#ifndef LONG_WIDTH
# error "missing LONG_WIDTH"
#endif
CHECK_WIDTH (signed long, LONG_MAX, LONG_WIDTH);
#ifndef ULONG_WIDTH
# error "missing ULONG_WIDTH"
#endif
CHECK_WIDTH (unsigned long, ULONG_MAX, ULONG_WIDTH);
#ifndef LLONG_WIDTH
# error "missing LLONG_WIDTH"
#endif
CHECK_WIDTH (signed long long, LLONG_MAX, LLONG_WIDTH);
#ifndef ULLONG_WIDTH
# error "missing ULLONG_WIDTH"
#endif
CHECK_WIDTH (unsigned long long, ULLONG_MAX, ULLONG_WIDTH);
