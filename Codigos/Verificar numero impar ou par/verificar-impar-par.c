#include <stdio.h>
int main() {
    int i;
    
    printf("===============Informar se é par ou ímpar===============");
    printf("Informe um número: ");
    
    scanf("%i", &i);
    if(i % 2 == 0){
        printf("O número %i é par", i);
     
        }else{
            printf("O número %i é ímpar", i);
            
        }
}


