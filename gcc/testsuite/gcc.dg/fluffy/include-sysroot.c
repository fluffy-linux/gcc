/* The configured native system header dir /sw/<star>/include is globbed
   below a --sysroot whose name contains "[1]"; the sysroot part must be
   taken literally.  fluffy.exp passes --sysroot=<fixture>/sys[1].  */
/* { dg-do preprocess } */

#include <sys_test.h>
#if SYS_OK != 99
#error bad SYS_OK
#endif
