// libstdc++'s <stdlib.h> wrapper chains with #include_next <stdlib.h> into
// glibc's header in another wildcard-expanded system include directory.
// Unsupported when the compiler cannot see the libstdc++ headers at all.
// { dg-do compile }
// { dg-require-effective-target libstdcxx_headers }

#include <stdlib.h>

int
f (int x)
{
  div_t d = div (x, 3);
  return d.rem + std::abs (x) + EXIT_SUCCESS;
}
