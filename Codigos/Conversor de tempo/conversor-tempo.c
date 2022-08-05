#include <stdio.h>
int main()
{
    float s, m, h;
    
    printf("=====Conversor de segundos para Horas/Minutos=====\n");
    printf("Digite o valor em segundos(s): ");
    scanf("%f", &s);

    m = s/60;
    h = s/3600;
    
    printf("%0.fs equivale(m) à %.3f minuto(s)\n", s, m);
    printf("%0.fs equivale(m) à %.3f hora(s)\n", s, h);
}
