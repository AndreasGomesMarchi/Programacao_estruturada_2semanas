#include <stdio.h>

int main (){
    int cod;
    float sal, salN;

    printf ("Qual e o seu codigo [1 a 5]? ");
    scanf ("%d", &cod);

    printf ("Qual e o seu salario atual? ");
    scanf ("%f", &sal);

    if (cod == 1){
        salN = sal * 1.50;
        printf ("\nCargo: Escriturario \nPercentual no salario: 50 por cento \nNovo salario: %.2fR$", salN);
    }else if (cod == 2){
        salN = sal * 1.35;
        printf ("\nCargo: Secretario \nPercentual no salario: 35 por cento \nNovo salario: %.2fR$", salN);
    }else if (cod == 3){
        salN = sal * 1.20;
        printf ("\nCargo: Caixa \nPercentual no salario: 20 por cento \nNovo salario: %.2fR$", salN);
    }else if (cod == 4){
        salN = sal * 1.10;
        printf ("\nCargo: Gerente \nPercentual no salario: 10 por cento \nNovo salario: %.2fR$", salN);
    }else if (cod == 5){
        printf ("\nCargo: Diretor \nPercentual no salario: 0 por cento \nNovo salario: %.2fR$", sal);
    }else{
        printf ("Codigo invalido!");
    }

    return 0;
}
