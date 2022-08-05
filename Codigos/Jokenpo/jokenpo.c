#include <stdio.h>
int main(){
    int j1, j2;
    
    printf("===============Jo-Ken-Po===============\n");
    printf("0 equivale à pedra;\n1 equivale à tesoura; \n2 equivale à papel.\n");
    printf("Informe a jogada de A e B Ex(0 2): ");
    scanf("%i %i", &j1, &j2);
    
    if((j1 == 0 && j2 == 1) ||(j1 == 1 && j2 == 2) || (j1 == 2 && j2 == 0))
    {
        printf("Jogador A venceu!");
    }
    else if((j2 == 0 && j1 == 1) || (j2 == 1 && j1 == 2) || (j2 == 2 && j1 == 0))
    {
     printf("O jogador B venceu!");   
    }else{
            printf("Empate!");        
         }
    
    
}
