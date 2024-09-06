#include <stdio.h>

int main (){
    float base, alt, area;

    printf ("Coloque aqui o valor da base do triangulo: ");
    scanf ("%f", &base);

    printf ("Coloque aqui o valor da altura do triangulo: ");
    scanf ("%f", &alt);

    area = (base * alt) / 2;

    printf ("A area do triangulo e %.2f", area);
}