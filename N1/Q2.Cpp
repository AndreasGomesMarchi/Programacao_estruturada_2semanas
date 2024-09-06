#include <stdio.h>

int main (){
    float n1, n2, n3, mf;

    printf ("Coloque a primeira nota: ");
    scanf ("%f", &n1);

    printf ("Coloque o segundo numero: ");
    scanf ("%f", &n2);

    printf ("Coloque o terceiro numero: ");
    scanf ("%f", &n3);

    mf = (n1 + n2 + n3) / 3;

    printf ("a media dessas tres notas e %.2f", mf);

    return 0;
}