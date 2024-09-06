#include <stdio.h>

int main (){
    int n1, n2, n3, n4, soma;

    printf ("Coloque o primeiro numero: ");
    scanf ("%d",&n1);

    printf ("Coloque o segundo numero: ");
    scanf ("%d", &n2);

    printf ("Coloque o terceiro numero: ");
    scanf ("%d", &n3);

    printf ("Coloque o quesrto numero: ");
    scanf ("%d", &n4);

    soma = n1 + n2 + n3 + n4;

    printf ("A soma desses quatro numeros e %d", soma);

    return 0;
}