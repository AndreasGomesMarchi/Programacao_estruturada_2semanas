#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int Ne=0, Na, T, rep, Qp, Qg=0, Med, C; //Variaveis escolhidas
    
    printf("--------------------------------------\nSEJA BEM VINDO AO JOGO DA ADIVINHACAO!\n--------------------------------------\n\n"); //Menu decorativo
    
    
    do{
    srand( (unsigned)time(NULL) );
    Na = 1 + (rand() % 100);
    
    C = 10;
    T = 0;

    printf("Digite um numero qualquer, entre 1 e 100, e tente adivinhar o valor!!!\n(lembrando que voce so tem 10 tentativas!)\n\n");

    while (T < 10) {
        printf("Digite um numero: ");
        scanf("%d", &Ne);

        if (Ne > Na) {
            printf("O seu numero e maior! Tente novamente!\n\n");
        } else if (Ne < Na) {
            printf("O seu numero e menor! Tente novamente!\n\n");
        } else {
            printf("\nVOCE ACERTOU!!!! VOCE E UMA LENDA MESMO, PARABENS!!!!\n\n");
            Qg++;
            break; // Sai do loop se o número for adivinhado
        }

        T++; // Incrementa o número de tentativas
        C--; // Decrementa o número de tentativas restantes
        printf("Voce ainda tem %d tentativas!\n\n", C);

        if (C == 0) {
            printf("Voce falhou! Nao conseguiu acertar o numero em 10 tentativas! A resposta era: %d\n", Na);
            break; // Sai do loop se o jogador esgotar as tentativas
        }
    }
    
    printf("Voce deseja jogar novamente? [0 para nao/1 para sim] -> ");
    scanf("%d", &rep);
    
    Qp++;
    
    }while( rep != 0);
    
    printf("O numero de partidas jogadas foi %d", Qp);
    printf("O numero de partidas ganhas foi %d", Qg);
    
    
    return 0;
}
