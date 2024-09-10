#include <stdio.h>

int main (){
    int anoN, ida, idaF; //Declarando as variaveis do tipo inteiro do problema.

    printf ("Em que ano voce nasceu? "); //Mostrando a pergunta para o usuario
    scanf ("%d", &anoN); //Escaneando e guardando a informacao que o usuario colocou

    ida = 2024 - anoN; //Calcular a idade do usuario
    printf ("Voce tem %d anos de idade.\n", ida); //Mostrar a idade do usuario

    idaF = (2050 - 2024) + ida; //Calcular a idade do usuario em 2050
    printf ("Olha que curioso, no ano de 2050, voce tera %d anos de idade!", idaF); //Mostrar a idade do usuario em 2050

    return 0;
}