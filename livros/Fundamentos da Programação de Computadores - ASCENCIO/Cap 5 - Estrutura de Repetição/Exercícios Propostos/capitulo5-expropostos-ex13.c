/* 13. Faça um programa que receba a idade e o peso de quinze pessoas, e que calcule e mostre as médias dos
pesos das pessoas da mesma faixa etária. As faixas etárias são: de 1 a 10 anos, de 11 a 20 anos, de 21 a
30 anos e de 31 anos para cima.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int idade[15], quant_pessoas=15;
	float peso[15], soma_peso[4]={0}, media_peso[4];
	
	printf("\tOla, usuario! Digite sua idade e seu peso\n");
	for (int i=0;i<15;i++) {
		printf("\nUsuario %i:",i+1);
		printf("\nIdade: ");
		scanf("%i", &idade[i]);
		printf("Peso: ");
		scanf("%f", &peso[i]);
	}
	
	system("cls");
	
	for (int i=0;i<15;i++) {
		if (idade[i] > 0 && idade[i] < 11) {
			soma_peso[0] = soma_peso[0] + peso[i];
		} else if (idade[i] > 10 && idade[i] < 21) {
			soma_peso[1] = soma_peso[1] + peso[i];
		} else if (idade[i] > 20 && idade[i] < 31) {
			soma_peso[2] = soma_peso[2] + peso[i];
		} else if (idade[i] > 30) {
			soma_peso[3] = soma_peso[3] + peso[i];
		}
	}
	
	for (int i=0;i<4;i++) {
		media_peso[i] = soma_peso[i] / quant_pessoas;
	}
	
	for (int i=0;i<4;i++) {
		printf("\nA media do peso das pessoas na %i faixa etaria: %2.2f%%", i+1, media_peso[i]);
	}
	
	printf("\n\n");
	
	system("pause");
	return 0;
}