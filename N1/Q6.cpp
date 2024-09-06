#include <stdio.h>

int main (){
    float sal, salg, sali;

    printf ("Coloque aqui o seu salario-base: ");
    scanf ("%f", &sal);

    salg = sal * 1.05;

    printf ("O seu salario com a gratificacao fica %.2fR$", salg);

    sali = salg * 0.93;

    printf (" Com o imposto ja descontado, o seu salario final e %.2fR$", sali);

    return 0;
} 