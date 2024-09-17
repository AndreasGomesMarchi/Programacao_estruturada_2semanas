#include <stdio.h>
#include <stdlib.h>

int main(){
	int num=0, soma=0, cont=0, par=0, contp=0, conti, num2;
	float med=0, pori, medp;
	
	while(num <= 30000){
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		soma += num; //a)
		cont++; //b)
		num2 += num;
		
		
    }
    
    if(num % 2 == 0){
			par += num2;
			contp++;
	}else{
			conti++;
	}
		
	med = soma / cont; //c)
	medp = par/contp; //f)

	
	printf("\nA soma dos valores e %d\n\n", soma); //a)
	printf("A quantidade de numeros digitados e %d\n\n", cont); //b)
	printf("A media dos numeros digitados e %.2f\n\n", med); //c)
	printf("A media dos numeros pares e %d\n\n", medp); //f)
	printf("A percentagem dos numeros impares entre todos os numeros digitados e %.2f", pori);
	
	return 0;
}
