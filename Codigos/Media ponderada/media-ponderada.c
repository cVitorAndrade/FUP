
#include <stdio.h>

int main()
{
    float n1, n2, n3, mp, p1, p2, p3;
    printf("=======================Calculadora de média ponderada=======================\n");
    printf("Para o cálculo você precisará informar os valores e seus respectivos pesos\n");
    printf("Digite o primeiro valor: ");
    scanf("%f", &n1);
    printf("Peso do primeiro valor: ");
    scanf("%f", &p1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);
    printf("Peso do segundo valor: ");
    scanf("%f", &p2);
    printf("Digite o terceito número: ");
    scanf("%f", &n3);
    printf("Peso do segundo valor: ");
    scanf("%f",  &p3);
    
    mp = ((n1*p1) + (n2*p2) + (n3*p3))/(p1+p2+p3);
    
    printf("A média ponderada é igual à: %0.2f", mp);
}

