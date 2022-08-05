#include <stdio.h>

int main()
{
    int valor;
    int resto2, resto5, resto10, resto20, resto50, resto100, resto200;
    int notas1, notas2, notas5, notas10, notas20, notas50, notas100, notas200;
    int i;
    int flag = 0;
    
    printf("Informe um valor: ");
    scanf("%d", &valor);
    
    notas200 = valor/200;
    resto200 = valor%200;
    
    notas100 = resto200/100;
    resto100 = resto200%100;
    
    notas50 = resto100/50;
    resto50 = resto100%50;
    
    notas20 = resto50/20;
    resto20 = resto50%20;
    
    notas10 = resto20/10;
    resto10 = resto20%10;
    
    notas5 = resto10/5;
    resto5 = resto10%5;
    
    notas2 = resto5/2;
    resto2 = resto5%2;
    
    notas1 = resto2/1;
    
    for(i=1; i<=notas200; i++)
    {
        if(flag == 0)
        {
        printf("200");
        flag = 1;
        }else{
            printf(", 200");
        }
    }
    
    for(i=1; i<=notas100; i++)
    {
        if(flag == 0)
        {
        printf("100");
        flag == 1;
        }else{
            printf(", 100");
        }
    }
    
    for(i=1; i<=notas50; i++)
    {
        if(flag == 0)
        {
            printf("50");
            flag = 1;
        }else{
            printf(",50 ");
        }
    }
    
    for(i=1; i<=notas20; i++)
    {
        if(flag == 0)
        {
            printf("20");
            flag = 1;
        }else{
            printf(", 20");
        }
    }
    
    for(i=1; i<=notas10; i++)
    {
        if(flag == 0)
        {
            printf("10");
            flag = 1;
        }else{
            printf(", 10");
        }
    }
    
    for(i=1; i<=notas5; i++)
    {
        if(flag == 0)
        {
            printf("5");
            flag = 1;
        }else{
            printf(", 5");
        }
    }
    
    for(i=1; i<=notas2; i++)
    {
        if(flag == 0)
        {
            printf("2");
            flag = 1;
        }else{
            printf(", 2");
        }
    }
    
    for(i=1; i<=notas1; i++)
    {
        if(flag == 0)
        {
            printf("1");
            flag = 1;
        }else{
            printf(", 1");
        }
    }
    
    if(valor <= 0)
    {
        printf("Valor inválido para saque");
    }
    printf(".");
}


