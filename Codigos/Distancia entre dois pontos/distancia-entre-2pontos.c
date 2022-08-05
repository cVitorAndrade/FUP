#include <stdio.h>
#include <math.h>
int main(){
    float x1, x2, y1, y2, distancia;
    float subX, subY, potX, potY, somaXY;
    
    printf("=====Calcular distância entre dois pontos=====\n");
    printf("Formula: √ (x₁ - x₂)² + (y₁ - y₂)²\n");
    printf("Digite o valor de x₁: ");
    scanf("%f", &x1);
    printf("Digite o valor de x₂: ");
    scanf("%f", &x2);
    printf("Digite o valor de y₁: ");
    scanf("%f", &y1);
    printf("Digite o valor de y₂: ");
    scanf("%f", &y2);
    
    subX = x2-x1;
    subY = y2-y1;
    
    potX = pow(subX,2);
    potY = pow(subY,2);
   
    somaXY = potX + potY;
    
    distancia = sqrt(somaXY);
    
    printf("A distância entre os dois pontos é: %f", distancia);
    
}

