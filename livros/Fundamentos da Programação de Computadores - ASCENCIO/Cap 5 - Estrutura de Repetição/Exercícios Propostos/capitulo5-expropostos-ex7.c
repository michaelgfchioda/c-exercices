/* 7. Faça um programa que receba a idade, a altura e o peso de cinco pessoas, calcule e mostre:
■ a quantidade de pessoas com idade superior a 50 anos;
■ a média das alturas das pessoas com idade entre 10 e 20 anos;
■ a porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas analisadas. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int idade[5]; 
	float altura[5], peso[5], soma_alturas=0, media_alturas=0, porcentagem;
	int quant_maior_50=0, quant_peso_menor_40=0, total_de_pessoas=5, quant_pessoas_10_20=0;
	
	printf("Ola! Digite seus dados logo abaixo\n");
	for (int i=0;i<5;i++) {
		printf("\n\tPessoa %i\n", i+1);
		printf("Idade: ");
		scanf("%i", &idade[i]);
		printf("Altura: ");
		scanf("%f", &altura[i]);
		printf("Peso: ");
		scanf("%f", &peso[i]);
		
		if (idade[i] > 50) {
			quant_maior_50++;
		}
		
		if (idade[i] > 9 && idade[i] < 21) {
			soma_alturas = soma_alturas + altura[i];
			quant_pessoas_10_20++;
		}
		
		if (peso[i] < 40) {
			quant_peso_menor_40++;
		} 
		
		printf("\n\n");
		system("pause");
		system("cls");
	}
	
	porcentagem = (quant_peso_menor_40 * 100) / (float)total_de_pessoas;
	
	if (quant_pessoas_10_20 > 0) {
	    media_alturas = soma_alturas / quant_pessoas_10_20;
	}
	
	printf("\nA quantidade de pessoas com idade superior a 50 eh %i", quant_maior_50);
	printf("\nA media das alturas das pessoas com idade entre 10 e 20 anos eh %.2f", media_alturas);
	printf("\nA porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas analisadas eh %.2f porcento\n\n", porcentagem);
	
	system("pause");
	return 0;
}