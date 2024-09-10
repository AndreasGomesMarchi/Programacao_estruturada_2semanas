#include <stdio.h>

int main(){
    float n1, n2, n3, n4;

    printf("Coloque tres numeros em ordem crescente: ");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);

    printf("Coloque outro numero aqui (sem estar em ordem crescente): ");
    scanf ("%f",&n4);

    if (n4 > n3){
        printf("A sequencia descrescente e %.0f %.0f %.0f %.0f ", n4, n3, n2, n1);
    }else if(n4 > n2 && n4 < n3){
        printf("A sequencia descrescente e %.0f %.0f %.0f %.0f", n3, n4, n2, n1);
    }else if(n4 > n1 && n4 < n2){
        printf("A sequencia descrescente e %.0f %.0f %.0f %.0f", n3, n2, n4, n1);
    }else {
        printf("A sequencia descrescente e %.0f %.0f %.0f %.0f", n3, n2, n1, n4);
    }

    return 0;
}