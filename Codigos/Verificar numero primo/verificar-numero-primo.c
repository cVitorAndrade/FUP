#include <stdio.h>

int main()
{
    int n;
    
    printf("========Informar se um número é primo ou não========\n");
    printf("Informe um número: ");
    scanf("%d", &n);
    
    if(n == 1 || n==2 || n==3 || n==5 || n==7)
    {
        printf("O número é primo");
    }else if(n%2==0 || n%3==0 || n%5==0 || n%7==0)
    {
        printf("O número não é primo");
    }else{
        printf("O número é primo");
    }
}

