#include<stdio.h>

main()
{
  long long i, resultado=0;
  float t1, t2;
  t1 = GetTime(); 
  for ( i=0; i<2000000; i++)
    resultado=resultado+i;
  t2 = GetTime();
  printf("Resultado = %9f\n", t1 - t2);
}
