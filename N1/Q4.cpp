#include <stdio.h>

int main (){
    float sal, salN;

    printf ("Coloque aqui o seu salario: ");
    scanf ("%f", &sal);

    salN = sal * 1.25;

    printf ("O seu novo salario e %.2fR$", salN);

    return 0;
}