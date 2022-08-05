#include <stdio.h>

int main()
{
    int n, t1 = 1, t2 = 1, seq;
    int c;
    /*
        A série de Fibonacci é uma série infinita de números naturais onde os dois primeiros
        são iguais á 1, e os demais são obtidos pela soma dos dois termos imediatamente anteriores
        Os 10 primeiros termos são 1, 1, 2, 3, 5, 8, 13, 21, 34, 55. Dado N como entrada determinar o n-ésimo 
        termo da série de Fibonacci
    */
    
    printf("Informe um valor: ");
    scanf("%d", &n);
    
    if(n == 1 || n == 2)
    {
        printf("Termo: 1");
    }
    
    for(c=2; c<n; c++)
    {
        seq = t1 + t2;
        t1 = t2;
        t2 = seq;
    }

    printf("%d", seq);
}
