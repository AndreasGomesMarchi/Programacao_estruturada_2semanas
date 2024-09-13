#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
 float sal, aum, por;
 int ano, i;
 
 	sal = 1015;
 	por = 1.5;
 	
 	printf("Em que ano estamos? ");
 	scanf("%d", &ano);
 	
 	printf("\nNo ano de 2006, o percentual de aumento foi 1.5\nEm 2006, o salario do funcionario era 1015R$\n\n");
 	
 	_sleep(1000);
 	
 	for(i=2007; i<=ano; i++)
 	{
 		por = por*2;
 		sal = sal + por/100 * sal;
 		printf("No ano de %d, o percentual de aumento foi %.0f\n", i, por);
 		printf("Em %d, o salario do funcionario era %.2fR$\n\n", i, sal);
 		_sleep(1000);
	 }
 
	system("pause");
  return 0;
}

