/* 8. Faça um programa que receba a idade, o peso, a altura, a cor dos olhos (A — azul; P — preto; V — verde; e
C — castanho) e a cor dos cabelos (P — preto; C — castanho; L — louro; e R — ruivo) de seis pessoas, e que
calcule e mostre:
■ a quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg;
■ a média das idades das pessoas com altura inferior a 1,50 m;
■ a porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas; e
■ a quantidade de pessoas ruivas e que não possuem olhos azuis. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int idade[6], total_pessoas=6;
	float peso[6], altura[6], media_idades, soma=0, porcentagem_olhos_azuis;
	char cor_dos_olhos[6], cor_dos_cabelos[6];
	int quant_idade_peso_50_60=0, quant_altura_inferior_150=0, quant_com_olhos_azuis=0, quant_ruiva_sem_olho_azul=0;
	
	printf("--- Preencha utilizando suas informacoes ---\n");
	for (int i=0;i<6;i++) {
		printf("\n\tPessoa %i\n", i+1);
		printf("Idade: ");
		scanf("%i", &idade[i]);
		printf("Peso: ");
		scanf("%f", &peso[i]);
		printf("Altura: ");
		scanf("%f", &altura[i]);
		printf("\n\tA - azul\n\tP - preto\n\tV - verde\n\tC - castanho\n");
		printf("\nCor dos olhos: ");
		scanf(" %c", &cor_dos_olhos[i]);
		printf("\n\tP - preto\n\tC - castanho\n\tL - louro\n\tR - ruivo\n");
		printf("\nCor dos cabelos: ");
		scanf(" %c", &cor_dos_cabelos[i]);
		
		printf("\n\n");
		
		system("pause");
		system("cls");
	}
	
	for (int i=0;i<6;i++) {
		// a) A quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg;
		if (idade[i] > 50 && peso[i] < 60) {
			quant_idade_peso_50_60++;
		}
		
		// b) A média das idades das pessoas com altura inferior a 1,50 m;
		if (altura[i] < 1.50) {
			soma = soma + idade[i];
			quant_altura_inferior_150++;
		}
		
		// c) A porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas;
		if (cor_dos_olhos[i] == 'A' || cor_dos_olhos[i] == 'a') {
			quant_com_olhos_azuis++;
		}
		
		// d) A quantidade de pessoas ruivas e que não possuem olhos azuis.
		if (cor_dos_cabelos[i] == 'R' || cor_dos_cabelos[i] == 'r') {
			if (cor_dos_olhos[i] != 'A' && cor_dos_olhos[i] != 'a') {
				quant_ruiva_sem_olho_azul++;
			}
		}
		
	}
	
	// b) A média das idades das pessoas com altura inferior a 1,50 m;
	if (quant_altura_inferior_150 > 0) {
    	media_idades = soma / quant_altura_inferior_150;	
	} else {
		media_idades = 0;
	}
	
	// c) A porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas;
	porcentagem_olhos_azuis = ((float)quant_com_olhos_azuis / total_pessoas) * 100;
	
	printf("\nA quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg eh %i", quant_idade_peso_50_60);
	printf("\nA media das idades das pessoas com altura inferior a 1,50 m eh %.2f", media_idades);
	printf("\nA porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas eh %.1f porcento", porcentagem_olhos_azuis);
	printf("\nA quantidade de pessoas ruivas e que nao possuem olhos azuis eh %i\n\n", quant_ruiva_sem_olho_azul);
	
	system("pause");
	return 0;
}