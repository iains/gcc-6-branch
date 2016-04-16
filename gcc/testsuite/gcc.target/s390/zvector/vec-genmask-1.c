/* { dg-do compile } */
/* { dg-options "-O3 -mzarch -march=z13 -mzvector" } */

#include <vecintrin.h>


vector unsigned int a, b, c, d, e, f;

int
foo ()
{
  a = vec_genmasks_32 (0, 31);
  b = vec_genmasks_32 (0, 0);
  c = vec_genmasks_32 (31, 31);
  d = vec_genmasks_32 (5, 5);
  e = vec_genmasks_32 (31, 0);
  f = vec_genmasks_32 (6, 5);
}
/* { dg-final { scan-assembler-times "vone" 1 } } */
/* { dg-final { scan-assembler-times "vgmf\t%v.*,0,0" 1 } } */
/* { dg-final { scan-assembler-times "vgmf\t%v.*,31,31" 1 } } */
/* { dg-final { scan-assembler-times "vgmf\t%v.*,5,5" 1 } } */
/* { dg-final { scan-assembler-times "vgmf\t%v.*,31,0" 1 } } */
/* { dg-final { scan-assembler-times "vone" 1 } } */
