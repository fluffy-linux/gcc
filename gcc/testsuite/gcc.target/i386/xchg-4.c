/* { dg-do compile { target { ! ia32 } } } */
/* { dg-options "-O2" } */

void ext(int x);
void foo(int x) 
{
    ext((x&~0xffff)|((x>>8)&0xff)|((x&0xff)<<8));
}

/* { dg-final { scan-assembler "rolw" { xfail *-*-* } } } */
/* { dg-final { scan-assembler-not "mov" { xfail *-*-* } } } */
/* Fluffy: fails with this gcc 16.2.0 build even with -fno-pie -fno-stack-protector;
   the byte swap is not combined into rolw.  */
