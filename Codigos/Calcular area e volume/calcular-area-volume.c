#include <stdio.h>

int main()
{
    float volume, area, largura, comprimento, altura;
    printf("============================Calculadora de área e volume============================\n");
    printf("Informe as medidas em metros (m)\n");
    printf("Altura: ");
    scanf("%f", &altura);
    printf("Largura: ");
    scanf("%f", &largura);
    printf("Comprimento: ");
    scanf("%f", &comprimento);
    
    volume = comprimento*altura*largura;
    area = largura*comprimento;
    
                //AS DUAS FORMAS FUNCIONAM;
                
    //printf("O volume do objeto é igual à: %.1f \n", volume);
    //printf("A área da superficie do objeto é igual à: %.1f", area);
    
    //printf("O volume do objeto é igual à: %.1f \n", comprimento*altura*largura);
    //printf("A área da superficie do objeto é igual à: %.1f", largura*comprimento);
    
    printf("O volume do objeto é igual à: %.1f m³ \n", volume);
    printf("A área da superficie do objeto é igual à: %.1f m²", area);
}

