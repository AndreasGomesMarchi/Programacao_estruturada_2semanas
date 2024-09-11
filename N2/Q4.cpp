#include <stdio.h>

int main(){
    float n1, n2, n3;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    printf("Digite o terceiro numero: ");
    scanf("%f", &n3);

    if (n1 > n2 && n1 > n3){
        printf("%.2f e maior que %.2f e %.2f.", n1, n2, n3);
    }else if(n2 > n1 && n2 > n3){
        printf("%.2f e maior que %.2f e %.2f.", n2, n1, n3);
    }else {
        printf("%.2f e maior que %.2f e %.2f.", n3, n2, n1);
    }
    
    return 0;
} //Esse algoritmo possivelmente possui um bug que eu nao conseguir encontra, entao fica aqui o comentario para olhar mais tarde.
