#include <stdio.h>
#include <stdlib.h>
int main()
{
    int c = 0 ;
    
    //Os dois comandos funcionam
    
    while(c <= 999)
    {   
        c++;
        system("sleep 0.3"); // função para delay 01 == 1 segundo de delay
        printf("Eu te amo\n");    
    }
    
    /*for(c = 0; c <= 999; c++ )
    {
        printf("Eu te amo \n");    
    }*/
}

