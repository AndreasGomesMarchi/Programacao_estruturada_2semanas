#include <stdio.h>

int main (){
    float pes, pol, jar, mil;

    printf ("Coloque aqui a medida que voce deseja em pes: ");
    scanf ("%f", &pes); //Guardar na memoria o valor dos pes que o usuario colocou

    pol = pes * 12; //Calcular o valor desses pes em polegadas
    printf ("O valor %.2f pes em polegadas e %.2f\n", pes, pol); //Exibir o valor das polegadas

    jar = pes / 3; //Calcular o valor desses pes em jardas
    printf ("O valor %.2f pes em jardas e %.2f\n", pes, jar); //Exibir o valor das jardas

    mil = jar / 1760; //Calcular o valor desses pes em milhas
    printf ("O valor %.2f pes em milhas e %.2f", pes, mil); //Exibir o valor das milhas

    return 0;
}