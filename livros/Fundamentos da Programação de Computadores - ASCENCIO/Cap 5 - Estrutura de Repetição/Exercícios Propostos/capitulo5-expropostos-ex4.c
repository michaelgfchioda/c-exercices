/* 4. Faça um programa que receba um número, calcule e mostre a tabuada desse número.
Exemplo:
Digite um número: 5
                         5 × 0 = 0
                         5 × 1 = 5
                         5 × 2 = 10
                         5 × 3 = 15
                         5 × 4 = 20
                         5 × 5 = 25
                         5 × 6 = 30
                         5 × 7 = 35
                         5 × 8 = 40
                         5 × 9 = 45
                         5 × 10 = 50  */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;
	
	printf("Digite um numero para visualizar sua tabuada: ");
	scanf("%i", &num);
	
	printf("\n\t--- Tabuada do numero %i ---\n", num);
	for (int i=0;i<11;i++) {
		printf("\t\t%i x %i = %i\n", num, i, num*i);
	}
		
	printf("\n\n");
	
	system("pause");
	return 0;
}