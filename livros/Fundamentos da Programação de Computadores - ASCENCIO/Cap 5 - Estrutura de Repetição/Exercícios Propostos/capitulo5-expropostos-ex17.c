/* 17. Foi feita uma pesquisa sobre a audiência de canal de TV em várias casas de uma cidade, em determinado dia. 
Para cada casa consultada foi fornecido o número do canal (4, 5, 7, 12) e o número de pessoas que
estavam assistindo àquele canal. Se a televisão estivesse desligada, nada era anotado, ou seja, 
essa casa não entrava na pesquisa. 
Faça um programa que:
■ leia um número indeterminado de dados (número do canal e número de pessoas que estavam assistindo); e
■ calcule e mostre a porcentagem de audiência de cada canal.
Para encerrar a entrada de dados, digite o número do canal ZERO.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num_canal=-1, num_pessoas_assist_canal[4]={0}, quant_pessoas_pesquisa=0;
	float percent_audiencia_canal[4]={0};
	
	while (num_canal != 0) {
		printf("\n\tOla! Seja bem vindo(a) a nossa pesquisa!\n");
		printf("\n\t\tCanais Disponiveis\n\t\t | 4, 5, 7, 12 |\n");
		printf("\nQual canal voce esta assistindo? ");
		scanf("%i", &num_canal);
		
		if (num_canal == 0) {
			printf("\n\n\n\tEncerrando a pesquisa...\n\n");
			break;
		}
		
		if (num_canal != 4 && num_canal != 5 && num_canal != 7 && num_canal != 12) {
			while (num_canal != 4 && num_canal != 5 && num_canal != 7 && num_canal != 12) {
				system("cls");
				
				printf("\n\tOla! Seja bem vindo(a) a nossa pesquisa!\n");
				printf("\n\t\tCanais Disponiveis\n\t\t | 4, 5, 7, 12 |\n");
        		printf("\n\tNao foi possivel encontrar o canal '%i'... Tente de novo!\n", num_canal);
				printf("\nQual canal voce esta assistindo? ");
        		scanf("%i", &num_canal);
			}
		}
		
		switch (num_canal) {
			case 4:
				num_pessoas_assist_canal[0]++;
				break;
			case 5:
				num_pessoas_assist_canal[1]++;
				break;
			case 7:
				num_pessoas_assist_canal[2]++;
				break;
			case 12:
				num_pessoas_assist_canal[3]++;
				break;
		}
		
		quant_pessoas_pesquisa++;
		system("cls");
	}
	
	// porcentagem de audiencia de cada canal
	percent_audiencia_canal[0] = ((float)num_pessoas_assist_canal[0]/(float)quant_pessoas_pesquisa)*100;
	printf("\nA porcentagem de audiencia do canal '4': %.0f%%", percent_audiencia_canal[0]);
	percent_audiencia_canal[1] = ((float)num_pessoas_assist_canal[1]/(float)quant_pessoas_pesquisa)*100;
	printf("\nA porcentagem de audiencia do canal '5': %.0f%%", percent_audiencia_canal[1]);
	percent_audiencia_canal[2] = ((float)num_pessoas_assist_canal[2]/(float)quant_pessoas_pesquisa)*100;
	printf("\nA porcentagem de audiencia do canal '7': %.0f%%", percent_audiencia_canal[2]);
	percent_audiencia_canal[3] = ((float)num_pessoas_assist_canal[3]/(float)quant_pessoas_pesquisa)*100;
	printf("\nA porcentagem de audiencia do canal '12': %.0f%%\n\n", percent_audiencia_canal[3]);
	//
	
	system("pause");
	return 0;
}