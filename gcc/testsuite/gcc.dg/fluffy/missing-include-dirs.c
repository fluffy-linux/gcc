/* A user -I directory that does not exist is kept, even though its name
   contains "[1]", so -Wmissing-include-dirs still diagnoses it.  fluffy.exp
   passes -Wmissing-include-dirs -Werror -I<fixture>/nonexistent_inc[1].  */
/* { dg-do preprocess } */

int x;

/* { dg-error "nonexistent_inc\\\[1\\\]: No such file or directory .-Werror=missing-include-dirs." "" { target *-*-* } 0 } */
/* { dg-message "all warnings being treated as errors" "" { target *-*-* } 0 } */
