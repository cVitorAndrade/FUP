#include <stdio.h>

int main()
{
    int p;
    
    printf("==========Imprimir todos os números pares menores que 250==========\n");
    
    for(p=248; p>=0; p-=2)
    {
        printf("%d \n", p);
    }
}

