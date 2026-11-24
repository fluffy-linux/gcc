// <cstdlib> from the libstdc++ headers (--with-gxx-include-dir=
// '/sw/*/include/c++') chains with #include_next <stdlib.h> into glibc's
// header in another wildcard-expanded system include directory.
// Unsupported when the compiler cannot see the libstdc++ headers at all.
// { dg-do compile }
// { dg-require-effective-target libstdcxx_headers }

#include <cstdlib>

int
f (int x)
{
  std::div_t d = std::div (x, 3);
  return d.rem + std::abs (x) + EXIT_SUCCESS;
}
