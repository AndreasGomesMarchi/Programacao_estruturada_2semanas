#include <stdio.h>
#include <math.h>

int main (){
    double base, exp, res;

    printf ("Coloque aqui o valor da base: ");
    scanf ("%lf", &base);

    printf ("Coloque aqui o valor do expoente: ");
    scanf ("%lf", &exp);

    res = pow(base, exp);

    printf ("Com a base sendo %.2lf e com o expoente sendo %.2lf, temos como resultado o valor %.2lf.", base, exp, res);

    return 0;
}