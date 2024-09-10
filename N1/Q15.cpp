#include <stdio.h>

int main(){
    float precoF, precofab, perL, perI, valL, valI;

    printf("Quanto custa o preco de fabrica de um veiculo? ");
    scanf("%f", &precofab);
    
    printf("Qual e a porcentagem de lucro do distribuidor? ");
    scanf("%f", &perL);

    printf("Qual e o percentual de impostos? ");
    scanf("%f", &perI);

    valL = precofab * (perL/100);
    printf("O valor correspodente ao lucro do distribuidor e %.2f\n", valL);

    valI = precofab * (perI/100);
    printf("O valor correspodente aos impostos e %.2f\n", valI);

    precoF = precofab + valL + valI;
    printf("O valor final do veiculo e %.2f", precoF);

    return 0;
}