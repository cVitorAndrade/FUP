#include <stdio.h>
int main()
{
    int n, p, soma_impar = 0, soma_par = 0;
    
    printf("Números pares:\n\n");
    for(n = 1; n <= 1000;  n += 2)
    {
        soma_impar += n;
        printf("%d\n", soma_impar);
    }
    printf("Números ímpares:\n\n");
    for(p = 0; p <= 1000; p += 2)
    {
        soma_par += p;
        printf("%d\n", soma_par);
    }
}
