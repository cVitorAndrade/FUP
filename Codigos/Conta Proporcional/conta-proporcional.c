#include <stdio.h>
int main(){
    float c1, c2, conta, s1, s2, sTotal;
    printf("======Calculadora de conta proporcional ao sálario======\n");
    printf("Digite o valor da conta: ");
    scanf("%f", &conta);
    printf("Digite o sálario dos dois clientes\n");
    printf("Primeiro cliente: ");
    scanf("%f", &s1);
    printf("Segundo cliente: ");
    scanf("%f", &s2);
    
    sTotal = s1 + s2;
    c1 = (s1*conta)/sTotal;
    c2 =(s2*conta)/sTotal;
    
    printf("O primeiro cliente deverá pagar: %.2f reais \n", c1);
    printf("O segundo cliente deverá pagar %.2f reais ", c2);
    
    
}

