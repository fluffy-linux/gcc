/* As include-sysroot-eq.c, but with -nostdinc so that only the -I=
   directory can provide the header.  fluffy.exp passes
   --sysroot=<fixture>/sys[1] -nostdinc -I=/sw/<star>/include.  */
/* { dg-do preprocess } */

#include <sys_test.h>
#if SYS_OK != 99
#error bad SYS_EQ_NOSTDINC_OK
#endif
