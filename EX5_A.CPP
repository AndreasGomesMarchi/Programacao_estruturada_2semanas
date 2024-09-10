#include <stdio.h>
#include <conio.h>
#include <string.h>
#include<stdlib.h>
main()
{float num1, num2, num3, num4;
//Limpa a tela
system("cls");
//Mostra mensagem solicitando trˆs n£meros em ordem crescente
printf("Digite trˆs n£meros em ordem crescente:\n");
//Recebe os trˆs n£meros
scanf("%f",&num1);
scanf("%f",&num2);
scanf("%f",&num3);
//Mostra mensagem solicitando um quarto n£mero em ordem aleat¢ria
printf("\nDigite um n£mero (fora de ordem): ");
//Recebe valor do quarto n£mero
scanf("%f",&num4);
//Determina e mostra a ordem decrescente dos quatro n£meros digitados
if (num4 > num3)
   printf("\nA ordem decrescente dos n£meros ‚: %.1f\t%.1f\t%.1f\t%.1f\t",num4,num3,num2,num1);
else if (num4 > num2 && num4 < num3)
	    printf("\nA ordem decrescente dos n£meros ‚: %.1f\t%.1f\t%.1f\t%.1f\t",num3,num4,num2,num1);
     else if (num4 > num1 && num4 < num2)
	       printf("\nA ordem decrescente dos n£meros ‚: %.1f\t%.1f\t%.1f\t%.1f\t",num3,num2,num4,num1);
           else
	           printf("\nA ordem decrescente dos n£meros ‚: %.1f\t%.1f\t%.1f\t%.1f\t",num3,num2,num1,num4);
//P ra o programa a espera de um ENTER
getch();
}
