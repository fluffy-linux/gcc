// libstdc++, zlib and zstd installed in the live prefix are found, linked
// and loaded with no -I or -L options.  Unsupported when the compiler cannot
// see the libstdc++, zlib or zstd headers at all.
// { dg-do run }
// { dg-require-effective-target libstdcxx_headers }
// { dg-require-effective-target zlib_zstd_headers }
// { dg-additional-options "-lz -lzstd" }

#include <cstdlib>
#include <iostream>
#include <sstream>
#include <zlib.h>
#include <zstd.h>

int
main ()
{
  std::ostringstream os;
  os << zlibVersion () << ":" << ZSTD_versionNumber ();
  return os.str ().empty () ? EXIT_FAILURE : EXIT_SUCCESS;
}
