#include <stdio.h>
int main(){
    int pDesejada, pLida, diferenca;
    printf("================Diferença entre pressão Desejada/Lida================\n");
    printf("Informe a pressão desejada: ");
    scanf("%i", &pDesejada);
    printf("informe a pressão lida: ");
    scanf("%i", &pLida);
    
    diferenca = pDesejada - pLida;
    
    printf("Diferença: %i", diferenca);
    
}
