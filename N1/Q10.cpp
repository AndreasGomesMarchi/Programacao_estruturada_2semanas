#include <stdio.h>
#include <math.h>

int main (){
    const float pi = 3.1415;
    double raio, area;

    printf ("Qual e o raio? ");
    scanf ("%lf", &raio);

    area = pi * pow(raio, 2);

    printf ("A area desse circulo e %.2lf", area);

    return 0;
}