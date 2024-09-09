#include <math.h>
#include <stdio.h>

int main(){
    double numero, numero2, numero3, numeroR2, numeroR3;

    printf ("Coloque aqui um numero: ");
    scanf ("%lf", &numero);

    numero2 = pow(numero, 2);
    numero3 = pow(numero, 3);
    numeroR2 = sqrt(numero);
    numeroR3 = cbrt(numero);

    printf ("Esse numero elevado ao quadrado e %.2lf.\n",numero2 );
    printf ("Esse numero elevado ao cubo e %.2lf.\n", numero3);
    printf ("A raiz quadrada desse numero e %.2lf.\n", numeroR2);
    printf ("A raiz cubica desse numero e %.2lf.", numeroR3);

    return 0;
}