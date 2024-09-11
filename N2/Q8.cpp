#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int C;
	float n1, n2, soma;
	double raiz, n3;
	
	printf("-----------------------------------\n SEJA BEM VINDO AO MENU DE ESCOLHA\n-----------------------------------\n\n");
	printf("Menu de opcoes:\n\n");
	printf("1 - Somar dois numeros\n");
	printf("2 - Raiz quadrada de um numero\n");
	printf("Digite a opcao desejada -> ");
	scanf("%d", &C);
	
	switch(C){
		
		case 1:
			
			printf("\nDigite o primeiro numero: ");
			scanf("%f", &n1);
			
			printf("Digite o segundo numero: ");
			scanf("%f", &n2);
			
			soma = n1 + n2;
			
			printf("A soma de %.2f e %.2f e igual a %.2f\n\n", n1, n2, soma);
			
			break;
		
		case 2:
			
			printf("\nDigite um numero aqui: ");
			scanf("%lf", &n3);
			
			raiz = sqrt(n3);
			
			printf("A raiz quadrada e %.0lf\n\n", raiz);
			
		break;
		
		default:
			
			printf("Codigo invalido!\n\n");
			
	}
	
	system("pause");
	return 0;
}
