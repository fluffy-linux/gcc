/* -I=/sw/<star>/include is expanded below a --sysroot whose name contains
   "[1]".  fluffy.exp passes --sysroot=<fixture>/sys[1] -I=/sw/<star>/include.  */
/* { dg-do preprocess } */

#include <sys_test.h>
#if SYS_OK != 99
#error bad SYS_EQ_OK
#endif
