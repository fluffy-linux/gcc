/* A -I pattern containing '*' is expanded; the match here is the
   directory "pkg[1]", whose own '[' must not be re-interpreted.
   fluffy.exp passes -I<fixture>/wild/<star>/include.  */
/* { dg-do preprocess } */

#include <wild_test.h>
#if WILD_OK != 42
#error bad WILD_OK
#endif
