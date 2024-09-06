#include <stdio.h>

int main (){
    float dep, ren, depf, renf;

    printf ("Coloque aqui o valor do seu deposito: ");
    scanf ("%f", &dep);

    printf ("Coloque aqui o valor da taxa de juros [1 a 100]: ");
    scanf ("%f", &ren);

    renf = dep * (ren / 100);

    printf ("O valor do rendimento, por mes, e %.2fR$\n", renf);

    depf = dep * (1 + (ren / 100));

    printf ("O seu novo salario e %.2fR$", depf);

    return 0;
}