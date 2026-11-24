/* As include-sysroot-eq.c, but with -nostdinc so that only the -I=
   directories can provide the headers: the pattern matches two packages
   below the sysroot, pkg2 and pkg[1], and each one's header must be
   found.  fluffy.exp passes
   --sysroot=<fixture>/sys[1] -nostdinc -I=/sw/<star>/include.  */
/* { dg-do preprocess } */

#include <sys_test.h>
#if SYS_OK != 99
#error bad SYS_EQ_NOSTDINC_OK
#endif
#include <sys2_test.h>
#if SYS2_OK != 98
#error bad SYS2_EQ_NOSTDINC_OK
#endif
