/* 12. Faça um programa que receba dez números inteiros e mostre a quantidade de números primos dentre os
números que foram digitados.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int numeros[10], quant_num_primo=0;
	
	printf("Ola! Digite 10 numeros inteiros\n\n");
	for (int i=0;i<10;i++) {
		printf("%i numero: ", i+1);
		scanf("%i", &numeros[i]);
		
	}
	
	for (int i=0;i<10;i++) {
		if (numeros[i] > 1) {
			int primo=1;
			
			for (int j=2;j<=sqrt(numeros[i]);j++) {
				if (numeros[i] % j == 0) {
					primo=0;
				}
			}
			if (primo) {
				quant_num_primo += numeros[i];
			}
		}		
	}
	
	printf("\nA quantidade de numeros primos digitados foram %i\n\n", quant_num_primo);
	
	system("pause");
	return 0;
}
