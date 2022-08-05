#include <stdio.h>

int main()
{
    float temp, escala, tempF, tempC;
    
    
    printf("=========================Conversor de temperaturas=========================\n");
    printf("Para a conversão é necessário informar a temperatura e a escala \n");
    
    printf("Informe a temperatura: ");
    scanf("%f", &temp);
    printf("0 equivale á Celsius; 1 equivale à Fahrenheit\n");
    printf("Informe a escala (0/1): ");
    scanf("%f", &escala);
    
    if(escala == 0){
                tempF = (1.8 * temp + 32);

        printf("Temperatura em Fahrenheit: %.2f°", tempF);
    }
    else if(escala == 1){
        tempC = (temp - 32)/1.8;
        printf("Temperatura em Celsius: %.4f°\n", tempC);
    }
    else{
             while(escala != 0 && escala != 1)
            {
             printf("Escala inválida\n");
             printf("Informe uma escala válida: ");
             scanf("%f", &escala);
             if(escala == 0){
                tempF = (1.8 * temp + 32);
                printf("Temperatura em Fahrenheit: %.2f°", tempF);
                            }
             else if(escala == 1)
             {
                tempC = (temp - 32)/1.8;
                printf("Temperatura em Celsius: %.4f°\n", tempC);
             }
            }
   
        }
}


