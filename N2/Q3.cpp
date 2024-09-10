#include <stdio.h>

int main(){
    float n1, n2;

    printf("Coloque o primeiro numero aqui: ");
    scanf("%f", &n1);

    printf("Coloque o segundo numero aqui: ");
    scanf("%f", &n2);

    if (n1 > n2)
    {
        printf("%.2f e maior que %.2f!", n1, n2);
    }else if (n2 > n1){
        printf("%.2f e maior que %.2f", n2, n1);
    }else {
        printf("Os dois numeros sao iguais!");
    }
    
    return 0;
}