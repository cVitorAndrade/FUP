#include <stdio.h>
int
main ()
{
  float n1, n2, m;

  printf ("=============Calcular média e ver situação=============\n");
  printf ("É necessário informar quais as duas notas parciais\n");
  printf ("Informe a primeira nota: ");
  scanf ("%f", &n1);
  printf ("Informe a segunda nota: ");
  scanf ("%f", &n2);

  m = (n1 + n2) / 2;

  if (m < 4)
    {
      printf ("A média do discente é: %.1f \n", m);
      printf ("Situação: Reprovação por média");
    }

  else if (m >= 4 && m <= 6.9)
    {
      printf ("A média do discente é: %.1f \n", m);
      printf ("Situação: Avaliação final");
    }
  else
    {
      printf ("A média do discente é: %.1f \n", m);
      printf ("Situaçãoo: Aprovação por média");
    }

}

