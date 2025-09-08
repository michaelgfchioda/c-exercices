/* 10. Faça um programa que receba dez números, calcule e mostre a soma dos números pares e a soma dos
números primos. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int numero[10], soma_nums_pares=0, soma_nums_primos=0;
	
	printf("Digite 10 numeros\n");
	for (int i=0;i<10;i++) {
		printf("\n\t%i numero: ", i+1);
		scanf("%i", &numero[i]);
		
		if (numero[i] % 2 == 0) {
			soma_nums_pares += numero[i];
		}
		
		if (numero[i] > 1) {
			int primo = 1;
			
			for (int j=2;j<=sqrt(numero[i]);j++) {
				if (numero[i] % j == 0) {
					primo = 0;
				    break;
				}
			}
			
			if (primo) {
				soma_nums_primos += numero[i];
			}
		}
	}
	
	printf("\nA soma dos numeros pares eh %i", soma_nums_pares);
	printf("\nA soma dos numeros primos eh %i\n\n", soma_nums_primos);	
	
	system("pause");
	return 0;
}