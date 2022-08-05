#include <stdio.h>
#include <math.h>
int main(){
    
    float n1, n2, valor;
    int d1, d2;
    char multi;
    multi = '%';
    printf("=============================Resultado das operações=============================\n");
    printf("Digite o primeiro número: ");
    scanf("%i", &d1);
    printf("Digite o segundo número: ");
    scanf("%i", &d2);
    printf("O resultado das operações são: \n");
    n1 = d1;
    n2 = d2;
    valor =  pow(n1,n2);
    
    printf("%.1f + %.1f = %.1f \n", n1, n2, n1+n2);
    printf("%i %c %i = %i\n", d1, multi, d2, d1%d2);
    printf("%.1f - %.1f = %.1f \n", n1, n2, n1-n2);
    printf("%.1f / %.1f = %.1f \n", n1, n2, n1/n2);
    printf("%.1f * %.1f = %.1f \n", n1, n2, n1*n2);
    printf("%.1f ^ %.1f = %.1f \n", n1, n2, valor);
  
 
}

