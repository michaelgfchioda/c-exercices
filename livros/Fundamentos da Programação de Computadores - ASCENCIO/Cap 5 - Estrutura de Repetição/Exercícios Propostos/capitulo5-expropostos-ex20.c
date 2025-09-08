/* 20. Faça um programa que apresente o menu de opções a seguir:
Menu de opções:
1. Média aritmética
2. Média ponderada
3. Sair
Digite a opção desejada.
Na opção 1: receber duas notas, calcular e mostrar a média aritmética.
Na opção 2: receber três notas e seus respectivos pesos, calcular e mostrar a média ponderada.
Na opção 3: sair do programa.
Verifique a possibilidade de opção inválida. Nesse caso, o programa deverá mostrar uma mensagem.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int opcao=0;
	float media_aritmetica, media_ponderada, notas_med_arit[2], notas_med_pond[3], pesos_med_pond[3], soma_notas_arit=0, soma_pesos_pond=0;
	
	while (opcao != 3) {
		printf("\tOla, usuario! O que deseja fazer?\n");
		printf("\n\t\t|(1) - Media aritmetica|\n\t\t|(2) - Media ponderada |\n\t\t|(3) - Sair\t       |\n");
		printf("\nDigite aqui: ");
		scanf("%i", &opcao);
		
		if (opcao != 1 && opcao != 2 && opcao != 3) {
			while (opcao != 1 && opcao != 2 && opcao != 3) {
				printf("\nNenhuma opcao '%i' encontrada...\n\n", opcao);
				
				system("pause");
				system("cls");
				
				printf("\tOla, usuario! O que deseja fazer?\n");
				printf("\n\t\t|(1) - Media aritmetica|\n\t\t|(2) - Media ponderada |\n\t\t|(3) - Sair\t       |\n");
		        printf("\nDigite aqui: ");
		        scanf("%i", &opcao);
				
			}
		}
		
		switch (opcao) {
			case 1:				
				printf("\n\tOpcao escolhida: (1) - Media aritmetica\n\nDigite as informacoes necessarias abaixo\n");
				for (int i=0;i<2;i++) {
					printf("\nNota %i: ", i+1);
					scanf("%f", &notas_med_arit[i]);
					
					soma_notas_arit += notas_med_arit[i];
				}
				
				media_aritmetica = soma_notas_arit / 2.0;
				printf("\nA media aritmetica eh %.2f\n\n", media_aritmetica);
				
				soma_notas_arit=0;
				
				system("pause");
				system("cls");
				break;
			case 2:
				printf("\n\tOpcao escolhida: (2) - Media ponderada\n\nDigite as informacoes necessarias abaixo\n");
				for (int i=0;i<3;i++) {
					printf("\nNota %i: ", i+1);
					scanf("%f", &notas_med_pond[i]);
					printf("\nPeso %i: ", i+1);
					scanf("%f", &pesos_med_pond[i]);
					
					soma_pesos_pond += pesos_med_pond[i];
				}
				
				media_ponderada = ((notas_med_pond[0]*pesos_med_pond[0]) + 
				(notas_med_pond[1]*pesos_med_pond[1]) + 
				(notas_med_pond[2]*pesos_med_pond[2])) / soma_pesos_pond;
				printf("\nA media ponderada eh %.2f\n\n", media_ponderada);
				
				soma_pesos_pond=0;
				
				system("pause");
				system("cls");
				break;
			case 3:
				printf("\n\n\n\tEncerrando o sistema...\n\n");
				break;
		}
    }
	
	system("pause");
	return 0;
}