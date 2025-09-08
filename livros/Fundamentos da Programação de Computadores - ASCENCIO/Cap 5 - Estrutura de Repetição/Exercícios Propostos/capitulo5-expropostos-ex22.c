/* 22. Faça um programa que receba a idade e a altura de várias pessoas, 
calcule e mostre a média das alturas daquelas com mais de 50 anos. 
Para encerrar a entrada de dados, digite idade menor ou igual a zero.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int idade[50], quant_usuarios_ate_parar=0, quant_pessoas_mais_50=0;
	float altura[50], soma_alturas_mais_50=0, media_alturas_mais_50;
	
	for (int i=0;i<50;i++) {
		printf("\tOla, usuario %i! Digite suas informacoes abaixo\n", i+1);
		printf("\nIdade: ");
		scanf("%i", &idade[i]);
		
		if (idade[i] < 1) {
			printf("\n\n\n\tEncerrando o sistema...\n\n");
			break;
		}
		
		printf("\nAltura: ");
		scanf("%f", &altura[i]);
		
		if (altura[i] < 1) {
			while (altura[i] < 1) {
				system("cls");
				
				printf("\tOla, usuario %i! Digite suas informacoes abaixo\n", i+1);
				printf("\nAltura invalida... Tente de novo!\n");
				printf("\nAltura: ");
	        	scanf("%f", &altura[i]);
			}
		}
		
		quant_usuarios_ate_parar++;
		system("cls");
	}
	
	// média das alturas daqueles com mais de 50 anos
	for (int i=0;i<quant_usuarios_ate_parar;i++) {
		if (idade[i] > 50) {
			quant_pessoas_mais_50++;
		    soma_alturas_mais_50 += altura[i];
		}
	}
	media_alturas_mais_50 = soma_alturas_mais_50 / quant_pessoas_mais_50;
	printf("\nA media das alturas das pessoas com mais de 50 anos eh de %1.2f m\n\n", media_alturas_mais_50);	
	
	system("pause");
	return 0;
}