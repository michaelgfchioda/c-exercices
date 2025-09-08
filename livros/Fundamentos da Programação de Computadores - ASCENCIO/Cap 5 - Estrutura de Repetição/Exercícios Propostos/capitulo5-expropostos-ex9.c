/* 9. Faça um programa que receba dez idades, pesos e alturas, calcule e mostre:
■ a média das idades das dez pessoas;
■ a quantidade de pessoas com peso superior a 90 kg e altura inferior a 1,50 metro; e
■ a porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1,90 m.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int idades[10], quant_peso_altura_90_150=0, quant_pessoas_190=0, total_pessoas=10;
	float peso[10], alturas[10], soma=0, media_idades, porcentagem_idade_de_10_a_30;
	
	printf("Ola! Digite seus dados\n");
	for (int i=0;i<10;i++) {
		printf("\n\tPessoa %i\n", i+1);
		printf("Idade: ");
		scanf("%i", &idades[i]);
		printf("Peso: ");
		scanf("%f", &peso[i]);
		printf("Altura: ");
		scanf("%f", &alturas[i]);
		
		printf("\n\n");
		system("pause");
		system("cls");
		
		// a) A média das idades das dez pessoas;
		soma = soma + idades[i];
		
	}
	
	media_idades = soma / 10;
	
	// b) A quantidade de pessoas com peso superior a 90 kg e altura inferior a 1,50 metro;
	for (int i=0;i<10;i++) {
		if (peso[i] > 90 && alturas[i] < 1.50) {
			quant_peso_altura_90_150++;
		}
		
		// c) A porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1,90 m.
		if (alturas[i] > 1.90) {
			quant_pessoas_190++;
			if (idades[i] > 9 && idades[i] < 31) {
				porcentagem_idade_de_10_a_30 = ((float)quant_pessoas_190 / total_pessoas) * 100;
			}
		}
	}
	
	printf("\nA media das idades das 10 pessoas eh %.1f", media_idades);
	printf("\nA quantidade de pessoas com peso superior a 90 kg e altura inferior a 1,50 metros eh %i", quant_peso_altura_90_150);
	printf("\nA porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1,90 metros eh %.2f porcento\n\n", porcentagem_idade_de_10_a_30);
	
	system("pause");
	return 0;
}