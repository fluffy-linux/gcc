/* { dg-do compile { target { ! ia32 } } } */
/* { dg-options "-O2 -march=x86-64 -mmemset-strategy=rep_8byte:8192:align,libcall:-1:noalign -fno-pie" } */
/* Keep labels and directives ('.cfi_startproc', '.cfi_endproc').  */
/* { dg-final { check-function-bodies "**" "" "" { target lp64 } {^\t?\.} } } */

/*
**foo:
**.LFB[0-9]+:
**	.cfi_startproc
**	movl	\$25, %ecx
**	xorl	%eax, %eax
**	movl	\$dest, %edi
**	rep stosq
**	movl	\$0, \(%rdi\)
**	ret
**...
*/

#define SIZE 204

char dest[SIZE];

void
foo (void)
{
  __builtin_memset (dest, 0, sizeof (dest));
}
/* Fluffy: gcc is configured with --enable-default-pie; the expected code is the non-PIE one.  */
