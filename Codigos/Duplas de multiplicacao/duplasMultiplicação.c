#include <stdio.h>

int main()
{
    int n, c;
    
    printf("Informe um valor: ");
    scanf("%d", &n);
    
    printf("Duplas: ");
    for(c=1; c < n; c++)
    {
        if(n%c == 0)
        { 
            printf("(%d x %d)", c, (n/c));
        }
    }
}

