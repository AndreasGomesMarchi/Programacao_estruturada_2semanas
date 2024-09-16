#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	float sal, saln;
	
	printf("Menu de opcoes:\n");
	printf("1 - Imposto\n");
	printf("2 - Novo salario\n");
	printf("3 - Classificacao\n");
	printf("Digite a opcao desejada -> ");
	scanf("%d", &i);
	
	switch(i){
		case 1:
			printf("Qual e o seu salario? ");
			scanf("%f", &sal);
			
			if(sal <= 500){
				printf("O imposto sobre seu salario e de 5 porcento, logo:\n");
				saln = sal * 0.95;
				printf("O seu novo salario e %.2f", saln);
			}
	}
	
	
	
	
	return 0;
}
