#include <stdio.h>
#include <stdlib.h>

int main(){
	int I;
	float A, B, C;
	
	printf("Coloque o primeiro numero: ");
	scanf("%f",&A);
	
	printf("Coloque o segundo numero: ");
	scanf("%f",&B);
	
	printf("Coloque o terceiro numero: ");
	scanf("%f",&C);
	
	printf("Certo! Agora escolha oque deseja fazer com esses valores:\n");
	printf("[1] Os valores em ordem crescente;\n");
	printf("[2] Os valores em ordem decrescente;\n");
	printf("[3] O maior valor fica entre os dois numeros;\n");
	scanf("%d", &I);
	
	switch(I){
		case 1:
			printf("Voce escolheu a opcao [1]!\nLogo, temos que...\n");
			
			if (A > B && B > C){
				
				printf("A sequencia crescente dos valores e: %.0f %.0f %.0f\n", C, B, A);
				
			}else if (B > A && A > C){
				
				printf("A sequencia crescente dos valores e: %.0f %.0f %.0f\n", C, A, B);
					
			}else if (A > C && C > B){
				
				printf("A sequencia crescente dos valores e: %.0f %.0f %.0f\n", B, C, A);
				
			}else if (B > C && C > A){
				
				printf("A sequencia crescente dos valores e: %.0f %.0f %.0f\n", A, C, B);
				
			}else if (C > A && A > B){
				
				printf("A sequencia crescente dos valores e: %.0f %.0f %.0f\n", B, A, C );
				
			}else {
				
				printf("A sequencia crescente dos valores e: %.0f %.0f %.0f\n", A, B, C);
				
			}
			
			break;
			
		case 2:
			printf("Voce escolheu a opcao [2]!\nLogo, temos que...\n");
			
			if (A > B && B > C){
				
				printf("A sequencia crescente dos valores e: %.0f %.0f %.0f\n", A, B, C );
				
			}else if (B > A && A > C){
				
				printf("A sequencia crescente dos valores e: %.0f %.0f %.0f\n", B, A, C);
					
			}else if (A > C && C > B){
				
				printf("A sequencia crescente dos valores e: %.0f %.0f %.0f\n", A, C, B);
				
			}else if (B > C && C > A){
				
				printf("A sequencia crescente dos valores e: %.0f %.0f %.0f\n", B, C, A);
				
			}else if (C > A && A > B){
				
				printf("A sequencia crescente dos valores e: %.0f %.0f %.0f\n", C, A, B );
				
			}else {
				
				printf("A sequencia crescente dos valores e: %.0f %.0f %.0f\n", C, B, A);
				
			}
			
			break;
			
		case 3:
			printf("Voce escolheu a opcao [3]!\nLogo, temos que...\n");
				
			if(A > B && B > C){
				
				printf("O maior valor vai ficar no meio: %.0f %.0f %.0f\n", B, A, C);
				
			}else if(B > A && A > C){
				
				printf("O maior valor vai ficar no meio: %.0f %.0f %.0f\n", A, B, C);
				
			}else if (A > C && C > B){
				
				printf("O maior valor vai ficar no meio: %.0f %.0f %.0f\n", C, A, B);
				
			}else if (B > C && C > A){
				
				printf("O maior valor vai ficar no meio: %.0f %.0f %.0f\n", C, B, A);
				
			}else if (C > A && A > B){
				
				printf("O maior valor vai ficar no meio: %.0f %.0f %.0f\n", A, C, B );
				
			}else {
				
				printf("O maior valor vai ficar no meio: %.0f %.0f %.0f\n", B, C, A);
				
			}
			
			break;
			
		default:
			printf("Opcao invalida!\n");
	}	
	
	system("pause");
	return 0;
}
