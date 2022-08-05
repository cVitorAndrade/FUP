#include <stdio.h>
int main(){
    
    float imc, altura, massa;
    printf("=============================Calculadora de IMC=============================\n");
    printf("Digite o valor da massa em kilogramas(Kg)\n");
    printf("Massa: ");
    scanf("%f", &massa);
    printf("Digite o valor da altura em metros(m)\n");
    printf("Altura: ");
    scanf("%f", &altura);
    
    imc = massa/(altura*altura);
    
    printf("O valor do imc é igual à: %.2f", imc);
    
}
