#include <stdio.h>

int main()
{   
    int tCons;
    float cons, conta;
    printf("==================Calcular conta de água==================\n");
    printf("1 equivale à Residencial;\n2 eqivale à Comercial\n3 equivale à Industrial\n");
    printf("Informe qual seu tipo consumo: ");
    scanf("%i", &tCons);
    printf("Informe o seu consumo em metros cúbicos(m³): ");
    scanf("%f", &cons);
    
    if(tCons == 1)
    {
        conta = (0.05 * cons) + 5;
        printf("Valor à ser pago: %.2f", conta);
    }
    else if(tCons == 2 && cons <= 80)
    {
        conta = 500; 
        printf("Valor à ser pago: %.2f", conta);
    }
    else if(tCons == 2 && cons > 80)
    {
        conta = 500 + ((cons - 80)*0.03);
        printf("Valor à ser pago: %.2f", conta);
    }
    else if(tCons == 3 && cons <= 100)
    {
        conta = 800;
        printf("Valor à ser pago: %.2f", conta);
    }
    else if(tCons == 3 && cons > 100)
    {
        conta = 800 + ((cons - 100)*0.04);
        printf("Valor á ser pago: %.2f", conta);
    }
}

