#include <stdio.h>

int main(){
    float num_hor_tra, sal_min, hor_tra, sal_bru, imp, sal;

    printf("Qual foi o numero de horas trabalhadas? ");
    scanf("%f", &num_hor_tra);

    printf("Qual e o valor do salario minimo? ");
    scanf("%f", &sal_min);

    hor_tra = sal_min / 2;

    sal_bru = num_hor_tra * hor_tra;

    imp = sal_bru * 3 / 100;

    sal = sal_bru - imp;

    printf("O salario a receber e %.2f", sal);

    return 0;
}