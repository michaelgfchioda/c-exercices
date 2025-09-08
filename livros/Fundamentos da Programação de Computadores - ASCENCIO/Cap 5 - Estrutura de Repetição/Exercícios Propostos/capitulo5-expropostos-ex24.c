/* 24. Faça um programa que receba um conjunto de valores inteiros e positivos, 
calcule e mostre o maior e o menor valor do conjunto. 
Considere que:
■ para encerrar a entrada de dados, deve ser digitado o valor zero;
■ para valores negativos, deve ser enviada uma mensagem;
■ os valores negativos ou iguais a zero não entrarão nos cálculos.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int valor[50], maior_valor=0, menor_valor=0, quant_valores_lidos=0;
	
	for (int i=0;i<50;i++) {
		printf("\tOla, usuario! Digite valores inteiros positivos abaixo\n");
		printf("\n%i valor do conjunto: ", i+1);
		scanf("%i", &valor[i]);
		
		if (valor[i] < 0) {
			while (valor[i] < 0) {
				system("cls");
				printf("\tErro! O valor deve ser positivo... Tente outro valor!\n");
				printf("\n%i valor do conjunto: ", i+1);
		        scanf("%i", &valor[i]);
			}
		}
		if (valor[i] == 0) {
			printf("\n\n\n\tEncerrando o programa...\n\n");
			break;
		}
		
		quant_valores_lidos++;
		system("cls");
	}
	
	// maior valor do conjunto
	maior_valor = valor[0];
	for (int i=1;i<quant_valores_lidos;i++) {
		if (valor[i] > maior_valor) {
			maior_valor = valor[i];
		}
	}
	printf("\nO maior valor encontrado foi %i", maior_valor);
	
	// menor valor do conjunto
	menor_valor = valor[0];
	for (int i=1;i<quant_valores_lidos;i++) {
		if (valor[i] < menor_valor) {
			menor_valor = valor[i];
		}
	}
	printf("\nO menor valor encontrado foi %i\n\n", menor_valor);
	
	system("pause");
	return 0;
}