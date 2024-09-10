#include <stdio.h>
#include <stdlib.h>

int main(){
    float tl, as, ef, mp;

    printf("Qual foi a nota do trabalho de laboratorio tirada? ");
    scanf("%f", &tl);

    printf("Qual foi a nota da avaliacao semestral tirada? ");
    scanf("%f", &as);

    printf("Qual foi a nota do exame final? ");
    scanf("%f", &ef);

    mp = (2 * tl + 3 * as + 5 * ef) / 10;

    printf("A nota final foi %.2f\n", mp);

    if (mp <= 4.99)
    {
        printf("Nota: E\n");
    }else if (mp <= 5.99)
    {
        printf("Nota: D\n");
    }else if (mp <= 6.99)
    {
        printf("Nota: C\n");
    }else if (mp <= 7.99)
    {
        printf("Nota: B\n");
    }else {
        printf("Nota: A\n");
    }

    system("pause");
    return 0;
}
