#include <stdio.h>

int main(){
    float saco, gato1, gato2, gato1_K, gato2_K, saco_final;

    printf ("Quantos kilos de racao o saco comprado tem? ");
    scanf("%f", &saco);

    printf("Quanto de racao, em gramas, o primeiro gato comeu no dia? ");
    scanf ("%f", &gato1);

    printf("Quanto de racao, em gramas, o segundo gato comeu no dia? ");
    scanf ("%f", &gato2);

    gato1_K = gato1 / 1000;

    gato2_K = gato2 / 1000;

    saco_final = saco - (5 * gato1_K + 5 * gato2_K);

    printf ("A quantidade de racao que sobrou, em kilograma, no saco e %.2fKg", saco_final);

    return 0;
}