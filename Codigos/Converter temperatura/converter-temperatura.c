#include <stdio.h>
int main(){
    float tempC, tempF;
    printf("=============Conversor de temperatura=============\n");
    printf("Digite a temperatura em Celsius:");
    scanf("%f", &tempC);
    tempF = (tempC*1.8) + 32;
    printf("A temperatura em Fahrenheit é: %0.2f °", tempF);
    
    
}
