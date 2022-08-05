#include <stdio.h>

int main()
{
    int n1, m, vm;
        //SAÍDA
    printf("======================Tabuada com Max multiplicador======================\n");
    printf("Informe o número para ver sua tabuada: ");
    scanf("%i", &n1);
    
    printf("Informe o valor máximo desejado do multiplicador Ex(%i * 20): ", n1);
    scanf("%i", &vm);
   
    m = 0;
    
   
        //COMANDOS - OS DOIS FUNCIONAM
    
  /*  do{
        printf("%i * %i = %i \n", n1, m, n1*m);
        m++;
    }while(m <= vm);*/
    
  /*  for(m = 0; m <= vm; m++){
      printf("%i * %i = %i\n", n1, m, n1*m);
      
   }*/
   
   do{
        printf("%i * %i = %i \n", n1, m, n1*m);
        m++;
    }while(m <= vm);
    
}



