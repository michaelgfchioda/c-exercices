/* 16. Faça um programa que receba várias idades, calcule e mostre a média das idades digitadas. 
Finalize digitando idade igual a zero.*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main()
{
	int i=0, idades[MAX], soma_idades=0, quant_usuarios=0; 
	float media_idades;
	
	printf("Ola, usuario! Digite sua idade!\n");
	for (int i=0;i<MAX;i++) {
		printf("\nIdade do %i usuario: ", i+1);
		scanf("%i", &idades[i]);
		
		if (idades[i] == 0) {
			printf("\n\n");
		    break;
		} else {
			soma_idades += idades[i];
			quant_usuarios++;
		}
	}
	
	media_idades = soma_idades / quant_usuarios;
	
	printf("\nA media das idades digitadas pelos %i usuarios eh de %.0f anos\n\n", quant_usuarios, media_idades);	
	
	system("pause");
	return 0;
}