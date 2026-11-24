/* zlib and zstd installed in the live prefix are found, linked and loaded
   with no -I or -L options.  Unsupported when the compiler cannot see
   <zlib.h> and <zstd.h> at all.  */
/* { dg-do run } */
/* { dg-require-effective-target zlib_zstd_headers } */
/* { dg-additional-options "-lz -lzstd" } */

#include <stdio.h>
#include <zlib.h>
#include <zstd.h>

int
main (void)
{
  return (zlibVersion () != NULL && ZSTD_versionNumber () > 0) ? 0 : 1;
}
