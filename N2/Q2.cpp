#include <stdio.h>

int main(){
    float n1, n2, n3, ma;

    printf("Coloque a primeira nota: ");
    scanf("%f", &n1);

    printf("Coloque a segunda nota: ");
    scanf("%f", &n2);

    printf("Coloque a terceira nota: ");
    scanf("%f", &n3);

    ma = (n1 + n2 + n3) / 3;

    printf("A media aritmetica da sua nota e %.2f\n", ma);

    if (ma <= 2.99){
        printf("Reprovado!");
    }else if(ma <= 6.99){
        printf("Exame!");
    }else {
        printf("Aprovado!");
    }

    return 0;
}