/* 14. Cada espectador de um cinema respondeu a um questionário no qual constava sua idade e sua opinião
em relação ao filme: ótimo — 3; bom — 2; regular — 1. 
Faça um programa que receba a idade e a opinião de quinze espectadores, calcule e mostre:
■ a média das idades das pessoas que responderam ótimo;
■ a quantidade de pessoas que responderam regular; e
■ a percentagem de pessoas que responderam bom, entre todos os espectadores analisados.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int idade[15], opiniao[15], quant_total_pessoas=15;
	float soma_idade_otimo=0, media_idade_otimo;
	int quant_pessoas_regular=0;
	float percent_pessoas_bom=0, quant_pessoas_bom=0;
	
	for (int i=0;i<15;i++) {
		printf("\tOla, espectador! Digite sua idade e de sua opiniao sobre o filme!\n");
		
		printf("\n\t\t|--- Avaliacao do filme ---|\n\t\t|\tOtimo - 3\t   |\n\t\t|\tBom - 2\t\t   |\n\t\t|\tRegular - 1\t   |\n");
		printf("\nEspectador %i:", i+1);
		printf("\nIdade: ");
		scanf("%i", &idade[i]);
		printf("Opiniao: ");
		scanf("%i", &opiniao[i]);
		    
		while (opiniao[i] != 1 && opiniao[i] != 2 && opiniao[i] != 3) {
			
			if (opiniao[i] != 1 && opiniao[i] != 2 && opiniao[i] != 3) {
				printf("\nNumero nao correspondente com a avaliacao...\n\n");
				printf("Opiniao: ");
		        scanf("%i", &opiniao[i]);
			}
			
			system("pause");
	        system("cls");
	        
	        printf("\n\t\t|--- Avaliacao do filme ---|\n\t\t|\tOtimo - 3\t   |\n\t\t|\tBom - 2\t\t   |\n\t\t|\tRegular - 1\t   |\n");
		}
		
		system("cls");
	}
	
	for (int i=0;i<15;i++) {
		if (opiniao[i] == 3) {
			soma_idade_otimo += idade[i];
		} else if (opiniao[i] == 1) {
			quant_pessoas_regular++;
		} else if (opiniao[i] == 2) {
			quant_pessoas_bom++;
		}
	}
	
	media_idade_otimo = soma_idade_otimo/quant_total_pessoas;
	percent_pessoas_bom = (quant_pessoas_bom/quant_total_pessoas)*100;
	
	printf("\nA media de idades das pessoas que responderam 'Otimo': %.0f anos", media_idade_otimo);
	printf("\nA quantidade de pessoas que responderam 'Regular': %i pessoas", quant_pessoas_regular);
	printf("\nA porcentagem de pessoas que responderam 'Bom': %.2f%% das pessoas\n\n", percent_pessoas_bom);
	
	system("pause");
	return 0;
}
