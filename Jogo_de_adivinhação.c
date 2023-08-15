#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main () {


    printf("****************************\n");
    printf("*****bem vindo ao jogo!*****\n");
    printf("****************************\n");
    
    int segundos = time (0);
    srand (segundos);


    int numero_grande = rand();

    int numero_misterioso = numero_grande % 100;
    int chute;
    int tentativas = 1; 
    double pontos = 1000;
     
     
   

    while (1) {
               
        printf("Tentativa %d\n", tentativas);
        printf("Qual o chute, paizao? ");

        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if (chute < 0) {
            printf("so conta numero positivo, animal\n");           
            continue;
        }

        int acertou = (chute == numero_misterioso);
        int maior = chute > numero_misterioso;


    if (acertou) {
    printf("Parabens, ce acertou!\n");
    printf("Jogue novamente!"); 

    break;
    
    }        
        else if (maior)  {
            printf("Chutou alto, chuta um mais baixo, animal\n");           
        }
        else {
            printf("Chutou baixao filho, aumenta ai \n");   
        }
           
        tentativas++; 
        double pontosperdidos = abs(chute -  numero_misterioso) / (double)2;
         {
            pontos = pontos - pontosperdidos;
        }
      
    }    
     printf("\nFim de jogo\n" );
     printf("Acertou em %d tentativas\n",tentativas ++);
     printf("total de pontos: %.1f\n", pontos);
}

   


