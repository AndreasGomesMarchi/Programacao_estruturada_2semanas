#include <stdio.h>

int main (){
    float n1, n2, n3, mf;
    int p1, p2, p3;

    printf ("Coloque a nota da primeira prova: ");
    scanf ("%f", &n1);
    printf ("Coloque o peso dessa prova: ");
    scanf ("%d", &p1);

     printf ("Coloque a nota da primeira prova: ");
    scanf ("%f", &n2);
    printf ("Coloque o peso dessa prova: ");
    scanf ("%d", &p2);

     printf ("Coloque a nota da primeira prova: ");
    scanf ("%f", &n3);
    printf ("Coloque o peso dessa prova: ");
    scanf ("%d", &p3);

    mf = (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);

    printf ("A media ponderada e %.2f", mf);

    return 0;
}