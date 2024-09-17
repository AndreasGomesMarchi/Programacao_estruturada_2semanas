#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int i;
	float k=1, N, raiz;
	
	printf("Digite o valor de N: ");
	scanf("%f", &N);
	
	for(i=1; i<=12;i++){
		k = (k + (N/k))/2;
		printf("\nO valor da raiz real e %.10f\n", k);
	}
	
	raiz = sqrt(N);
	
	if(raiz == k){
		printf("\nRaiz verdadeira\n\n");
	}else{
		printf("\nRaiz nao verdadeira\n\n");
	}
	
	system("pause");
	return 0;
}
