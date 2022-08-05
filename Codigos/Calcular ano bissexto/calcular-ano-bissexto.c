#include <stdio.h>
int main()
{
    int ano;
    
    printf("==========Descobrir se o ano é bissexto==========\n");
    printf("Informe o ano: ");
    scanf("%i", &ano);
    
    if(ano % 4 == 0 && ano % 100 !=0 || ano % 400 == 0)
    {
        printf("Ano bissexto");
    }
    else if(ano % 4 != 0 || ano % 400 != 0)
    {
        printf("Ano não bissexto");
    }
    
}
