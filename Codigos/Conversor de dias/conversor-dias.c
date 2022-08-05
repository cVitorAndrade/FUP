#include  <stdio.h>
int
main ()
{
  int d, s, m, a, aN, aA;

  printf ("=====Calculadora de Anos/Meses/Semanas/Dias=====\n");
  printf ("Informe o ano do seu nascimento: ");
  scanf ("%i", &aN);
  printf ("Informe o ano atual: ");
  scanf ("%i", &aA);
  
  a = aA-aN;
  m = a*12;
  d = a*365;
  s = d/7;
  
  printf ("Sua idade \n");
  printf ("Em anos: %i  \n", a);
  printf ("Em meses: %i \n", m);
  printf ("Em semanas: %i \n", s);
  printf ("Em dias: %i \n", d);





}

