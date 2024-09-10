#include <stdio.h>

int main(){
    float dep, che1, che2, cpmf1, cpmf2, sal_F;

    printf("Qual foi o valor depositado? ");
    scanf("%f", &dep);

    printf("Qual foi o valor do primeiro cheque? ");
    scanf("%f", &che1);

    printf("Qual foi o valor do segundo cheque? ");
    scanf("%f", &che2);

    cpmf1 = che1 * 38 / 100;

    cpmf2 = che2 * 38 / 100;

    sal_F = dep - (cpmf1 + cpmf2);

    printf("O sel saldo atual e %.2f", sal_F);

    return 0;
}