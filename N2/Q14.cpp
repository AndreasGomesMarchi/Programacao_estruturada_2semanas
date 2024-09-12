#include <stdio.h>

int main (){
    float sal, saln;

    printf("Coloque aqui o seu salario: ");
    scanf ("%f", &sal);

    if (sal <= 500){
        saln = sal * 1.05 + 150;
        printf ("O seu novo salario, considerando bonificacao e auxilio-escola e %.2fR$", saln);
    }else if (sal <= 600){
        saln = sal * 1.12 + 150;
        printf ("O seu novo salario, considerando bonificacao e auxilio-escola e %.2fR$", saln);
    }else if (sal <= 1200){
        saln = sal * 1.12 + 100;
        printf ("O seu novo salario, considerando bonificacao e auxilio-escola e %.2fR$", saln);
    }else {
        saln = sal + 100;
        printf ("O seu novo salario, considerando bonificacao e auxilio-escola e %.2fR$", saln);
    }

    return 0;
}
