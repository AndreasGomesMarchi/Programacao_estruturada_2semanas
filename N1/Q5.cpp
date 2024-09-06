#include <stdio.h>

int main (){
    float sal, salN, aum;

    printf ("Coloque aqui o seu salario: ");
    scanf ("%f", &sal);

    printf ("Coloque aqui o percentual de aumento: ");
    scanf ("%f", &aum);

    salN = sal * (1 + (aum / 100));

    printf ("O seu novo slario e %.2fR$", salN);

    return 0;
}