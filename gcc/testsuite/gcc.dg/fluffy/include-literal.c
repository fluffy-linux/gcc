/* Only a whole '*' component is a wildcard, so "[1]" in a -I directory is
   literal: -I<fixture>/lit[1]/include must find lit[1]/include/lit_test.h,
   not lit1/include/lit_test.h, which "[1]" would match as a glob.  */
/* { dg-do preprocess } */

#include <lit_test.h>
#if LIT_OK != 77
#error bad LIT_OK
#endif
