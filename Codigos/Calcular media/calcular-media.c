#include <stdio.h>
int main(){
    float n1, n2, n3, m;
    printf("===================Calculadora de média===================\n");
    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);
    printf("Digite o terceiro número: ");
    scanf("%f", &n3);
    
    m = (n1 + n2 + n3)/3;
    
    printf("A média é: %.2f",m);
    
    
}
