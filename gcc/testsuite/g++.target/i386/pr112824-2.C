/* PR target/112824 */
/* { dg-do compile } */
/* { dg-options "-std=c++23 -O3 -march=skylake-avx512 -mprefer-vector-width=512 -fno-stack-protector" } */
/* { dg-final { scan-assembler-not "vmov.*\[ \\t\]+\[^\n\]*%rsp" } } */

#include "pr112824-1.C"

void prod(Dual<Dual<double,8>,2> &c, const Dual<Dual<double,8>,2> &a, const Dual<Dual<double,8>,2>&b){
    c = a*b;
}
/* Fluffy: gcc is configured with --enable-default-ssp; the expected code has no stack protector.  */
