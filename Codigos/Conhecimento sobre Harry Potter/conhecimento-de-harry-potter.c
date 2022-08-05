#include <stdio.h>
int main()
{
    char r1, r2, r3, r4;
    int nResposta = 0;
    
    printf("============Conhecimeto sobre Harry Potter============\n");
    printf("1 - A que casa pertencia Harry Potter e seus amigos\n");
    printf("a) Hufflwpuff\nb) Ravenclaw\nc) Slytherin\nd) Gryffindor\n");
    printf("Sua resposta: ");
    scanf(" %c", &r1);
    printf("\n");
    
    if(r1 == 'd' || r1 == 'D')
    {
        printf("[certa resposta!]\n");
        printf("\n");
        nResposta = nResposta +1;
    }
    else{
            printf("[resposta errada!]\n"); 
            printf("\n");
        }
        
    printf("2 - Qual o nome verdadeiro do personagem o qual\né conhecido por aquele que não pode ser nomeado?\n");
    printf("a) Tom Riddle\nb) Draco Malfoy\nc) Bellatrix Lestrange\nd) Pedro Pettigrew\n");
    printf("Sua resposta: ");
    scanf(" %c", &r2);
    printf("\n");
    
    if(r2 == 'a' || r2 == 'A')
    {
        printf("[certa resposta!]\n");
        printf("\n");
        nResposta = nResposta +1;
    }
    else{
            printf("[resposta errada!]\n");
            printf("\n");
        }
        
    printf("3 - Quais das opções não é uma relíquia da morte?\n");
    printf("a) A varinha de sabugueiro\nb) A pedra da ressureição\nc) A pedra filosofal\nd) A capa de invisibilidade\n");
    printf("sua resposta: ");
    scanf(" %c", &r3);
    printf("\n");
    
    if(r3 == 'c' || r3 == 'C')
    {
        printf("[certa resposta!]\n");
        printf("\n");
        nResposta = nResposta +1;
    }
    else{
            printf("[resposta errada!]\n");
            printf("\n");
        }
    
    printf("4 - O ministério da magia proibiu\no uso de três feitiços, conhecidos\ncomo as maldições imperdoáveis, por ela possuírem\ncaráter maligno e o objetivo cruel.\nMarque opção abaixo que não corresponde\na umas das maldições imperdoáveis: \n");
    printf("a) Crucio\nb) Imperio\nc) Avada Kedavra\nd) Expecto Patronum\n");
    printf("Sua resposta: ");
    scanf(" %c", &r4);
    printf("\n");
    
    if(r4 == 'd' || r4 == 'D')
    {
        printf("[certa resposta!]\n");
        printf("\n");
        nResposta = nResposta +1;
    }
    else{
            printf("[resposta errada!]");
            printf("\n");
        }
        
    printf("Número de acertos = Significado\n");
    
    if(nResposta == 0)
    {
        printf("0 = Nunca assistiu\n");
    }
    else if(nResposta == 1)
    {
        printf("1 = Já ouviu falar\n");
    }
    else if(nResposta == 2)
    {
        printf("2 = Interessado no assunto\n");
    }
    else if(nResposta == 3)
    {
        printf("3 = Fã\n");
    }
    else{
        printf("4 = Super Fã\n");
    }
    
}
