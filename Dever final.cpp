#include <stdio.h> //Biblioteca responsavel por possuir definicoes de subrotinas relativas as operacoes de entrada/saida
#include <stdlib.h> //Biblioteca que adiciona as funcoes srand e rand para serem utilizadas no algoritmo
#include <time.h> //Biblioteca que adiciona a funcao time que e utilizada pelo algoritmo para gerar o valor aleatorio

int main() //Inicio do algoritmo
{
    int Ne, Na, T, rep, Qp, Qg=0, C, Cont=0, DivM=1, opc; //Variaveis escolhidas. Qg recebe 0 no inicio do programa para que, caso o usuario perca, ele mostre 0 no final do programa. Cont e 0 pois ele precisa somar o numero de tentativas ate acertar. DivM recebe 1 pois, caso o usuario nao ganhe nenhuma partida, nao corre o risco do programa quebrar pois ele representa o divisor no calculo da media
    float Med, x, y, res; //Med vai ser uma variavel float por serresponsavel por calcular uma media
    
    do{ //Inicio do Do-while. 
    srand(time(NULL) ); //Funcao responsavel por escolher um numero novo toda vez que o programa inicia ou reinicia. Onde o argumento time(NULL) usa o tempo atual para garantir a aleatoriedade do valor escolhido
    Na = 1 + (rand() % 100); //Gerar um numero aleatorio de 1 a 100
    
    C = 10; //numero de tentativas restantes
    T = 0; //numero de tentativas

    printf("--------------------------------------\nSEJA BEM VINDO AO JOGO DA ADIVINHACAO!\n--------------------------------------\n\n"); //Menu decorativo

    printf("Digite um numero qualquer, entre 1 e 100, e tente adivinhar o valor!!!\n(lembrando que voce so tem 10 tentativas!)\n\n"); //Instrucoes do jogo

    while (T < 10) {
        printf("Digite um numero: "); //Pede para o usuario escolher um numero
        scanf("%d", &Ne); //Salva o numero escolhido do usuario na variavel Ne

        if (Ne > Na) { //Inclusao do if-else para que o programa diga para o usuario se ele colocou um numero maior ou menor que o valor escolhido. Alem de mostrar a mensagem que voce acertou caso coloque um numero igual ao que o algoritmo escolheu

            printf("O seu numero e maior! Tente novamente!\n\n"); //Mostra para o usuario que seu numero e maior do que o escolhido pelo algoritmo

        } else if (Ne < Na) {

            printf("O seu numero e menor! Tente novamente!\n\n");//Mostra para o usuario que seu numero e menor do que o escolhido pelo algoritmo

        } else {

            printf("\nVOCE ACERTOU!!!! VOCE E UMA LENDA MESMO, PARABENS!!!!\n\n");//Mostra para o usuario que ele colocou um numero igual ao do algoritmo e o parabeniza por isso

            Qg++; //Variavel responsavel por marcar quantas vezes o usuario ganhou o jogo
            Cont += T; //A variavel Cont vai ser responsavel por contar o numero de tentativas ate acertar para depois usar na media de tentativas ate acertar o valor. Por isso ele recebe o incremento da variavel T
            DivM = Qg; //A variavel DivM vai ser responsavel por ser o divisor na media de tentativas ate a vitora, por isso ele recebe o valor de Qg quando o usuario ganha

            break; // Sai do loop se o numero for adivinhado

        } //fim do if-else que mostra para o usuario se ele colocou um valor meior/menor ou se acertou o valor escolhido pelo algoritmo 

        T++; // Incrementa o numero de tentativas
        C--; // Decrementa o numero de tentativas restantes
        printf("Voce ainda tem %d tentativas!\n\n", C); //Mostrar para o usuario quantas tentativas ainda restam. 

        if (C == 0) { //Inicio do if para caso voce falhe

            printf("Voce falhou! Nao conseguiu acertar o numero em 10 tentativas! A resposta era: %d\n", Na); //Mostra para o usuario que ele nao conseguiu acertar o numero escolhido em 10 tentaivas
            break; // Sai do loop se o jogador esgotar as tentativas

        } //Fim do if para mostrar que voce falhou
    } //Fim do while
    
    printf("Voce deseja jogar novamente? [0 para nao/1 para sim] -> "); //Perguntar para o usuario se ele deseja jogar novamente.
    scanf("%d", &rep); //Guardar o valor 0 ou 1. Onde 0 nao recomeca o jogo e 1 sim.

    if(rep == 0){ //Adicao do if-else para verificar se o usuario deseja jogar novamente ou nao. Alem de aparecer uma mensagem caso o usuario coloque um valor invalido para a variavel rep

        printf("\nEntao aqui estao as estatisticas do seu jogo:\n"); //Mensagem para avisar ao usuario que o jogo acabou e que sera mostrado as estatisticas

    }else if (rep == 1){

        printf("\nAntes de recomecar, voce precisa treinar seus calculos, por conta disso, escolha uma operacao matematica basica:\n"); //Inicio da parte de calculo do jogo
        printf("[1] - Soma\n"); //Opcao 1
        printf("[2] - Subtracao\n"); //Opcao 2
        printf("[3] - Multiplicacao\n"); //Opcao 3
        printf("[4] - Divisao\n"); //Opcao 4
        printf("Escolha qual voce deseja fazer -> "); //Escolher uma opcao de soma entre 1 a 4, onde cada numero e referente a uma operacao matematica
        scanf("%d", &opc); //A variavel opc recebe o valor escolhido pelo usuario

        switch (opc){ //Inicio do switch-case

        case 1: //Case de soma

            printf("Escolha o primeiro valor: "); //Mostra para o usuario que ele precisa colocar o primeiro valor
            scanf("%f", &x); //A variavel x recebe o primeiro valor

            printf("escolha o segundo numero: "); //Mostra para o usuario que ele precisa colocar o segundo valor
            scanf("%f", &y); //A variavel y recebe o segundo valor

            res = x + y; //Calculo da resposta

            printf("\nA resposta da soma entre %.2f e %.2f e %.2f", x, y, res); //Mostra a resposta para o usuario

            break; //Sai do switch-case

        case 2: //Case de subtracao

            printf("\nEscolha o primeiro valor: "); //Mostra para o usuario que ele precisa colocar o primeiro valor
            scanf("%f", &x); //A variavel x recebe o primeiro valor

            printf("Escolha o segundo numero: "); //Mostra para o usuario que ele precisa colocar o segundo valor
            scanf("%f", &y); //A variavel y recebe o segundo valor

            res = x - y; //Calculo da resposta

            printf("\nA resposta da subtracao entre %.2f e %.2f e %.2f\n", x, y, res); //Mostra a resposta para o usuario

            break; //Sai do switch-case

        case 3: //Case de multiplicacao

            printf("\nEscolha o primeiro valor: ");  //Mostra para o usuario que ele precisa colocar o primeiro valor
            scanf("%f", &x); //A variavel x recebe o primeiro valor

            printf("Escolha o segundo numero: "); //Mostra para o usuario que ele precisa colocar o segundo valor
            scanf("%f", &y); //A variavel y recebe o segundo valor

            res = x * y; //Calculo da resposta

            printf("\nA resposta da multiplicacao entre %.2f e %.2f e %.2f\n", x, y, res); //Mostra a resposta para o usuario

            break; //Sai do switch-case

        case 4: //Case de divisao

            printf("\nEscolha o primeiro valor: "); //Mostra para o usuario que ele precisa colocar o primeiro valor
            scanf("%f", &x); //A variavel x recebe o primeiro valor

            printf("Escolha o segundo numero: "); //Mostra para o usuario que ele precisa colocar o segundo valor
            scanf("%f", &y); //A variavel y recebe o segundo valor

            res = x / y; //Calculo da resposta

            printf("\nA resposta da divisao entre %.2f e %.2f e %.2f\n", x, y, res); //Mostra a resposta para o usuario

            break; //Sai do switch-case

        default: //Case default

            printf("\nValor invalido! O jogo reiniciara sem calcular nada!!!\n"); //Mostra para o usuario que ele colocou uma opcao invalida

            break; //Sai do switch-case

        } //Fim do switch-case

        printf("\nEntao vamos jogar novamente!!!\n\n"); //Mensagem para avisar ao usuario que ele desejou reiniciar o jogo

        system("pause"); //O sistema da uma pausa antes de continuar
        system("cls"); //O sistema limpa a tela para o jogo recomecar

    }else{

        printf("\nValor invalido!!! O jogo sera finalizado e as estatisticas serao mostradas!\n"); //Mostra que o valor escolhido para a variavel rep e invalida.

        Qp++; //Variavel que guarda a quantidade de partidas jogadas, recebe um incremento a cada nova partida jogada. Ela foi colocada aqui tambem, pois a funcao break presente logo abaixo pula o Qp escrito logo apos esse if-else

        break; // Sai do loop se o jogador escolher um valor invalido para rep

    } //fim do if-else  para verificar se o usuario deseja jogar novamente ou nao. Alem de aparecer uma mensagem caso o usuario coloque um valor invalido para a variavel rep
    
    Qp++; //Variavel que guarda a quantidade de partidas jogadas, recebe um incremento a cada nova partida jogada.
    
    }while( rep != 0); //Fim do laco de repeticao do-while. Caso a variavel rep, que simbolozida se o usuario deseja jogar novamente, seja 0, o jogo termina.
    
    Med = Cont / DivM; //Calcular a media de tentativas ate acertar o valor

    printf("\nO numero de partidas jogadas foi -> %d\n", Qp); //Mostrar o numero de partidas jogadas para o usuario
    printf("O numero de partidas ganhas foi -> %d\n", Qg); //Mostrar o numero de partidas ganhas pelo usuario
    printf("A media de tentativas para acertar o numero nas partidas vencidas foi -> %.2f", Med); //Mostrar a media de tentativas para acertar o numero nas partidas vencidas
    
    return 0; //Fim do algoritmo
}

