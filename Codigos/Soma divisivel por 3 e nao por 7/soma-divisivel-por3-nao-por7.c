#include <stdio.h>

int main()
{
    int c, soma;
    
    for(c=0; c<=200; c++)
    {
        if(c%3==0 && c%7!=0)
        {
            soma = soma+c;
        }
    }
    printf("%d", soma);
}
