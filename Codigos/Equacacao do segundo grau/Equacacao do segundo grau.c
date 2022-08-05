#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, x1, x2, delta;
    
    printf("===========Calcular equação do segundo grau===========\n");
    printf("É necessário informar os três coeficientes Ex(1 2 3)\n");
    printf("Coeficientes: ");
    scanf("%f %f %f", &a, &b, &c);
    
    delta = pow(b,2) - (4*a*c);
    
    if(a == 0)
    {
        printf("'A' igual à zero, não é uma equação do 2° grau");
    }
    else if(a != 0 && delta < 0)
    {
        printf("Delta negativo, não há raizes reais");
    }
    else{
        x1 = ((-b) + sqrt(delta)) / (2*a) ;
        x2 = ((-b) - sqrt(delta)) / (2*a) ;
        printf("As raizes são:\n x1 = %.2f \n x2 = %.2f", x1, x2);
    }
}

