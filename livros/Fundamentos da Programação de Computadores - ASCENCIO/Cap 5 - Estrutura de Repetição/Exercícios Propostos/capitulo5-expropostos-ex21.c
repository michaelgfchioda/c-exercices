/* 21. Em uma eleição presidencial existem quatro candidatos. 
Os votos são informados por meio de código.
Os códigos utilizados são:
1, 2, 3, 4 ------ Votos para os respectivos candidatos
    5 ----------- Voto nulo
    6 ----------- Voto em branco
Faça um programa que calcule e mostre:
■ o total de votos para cada candidato;
■ o total de votos nulos;
■ o total de votos em branco;
■ a porcentagem de votos nulos sobre o total de votos; e
■ a porcentagem de votos em branco sobre o total de votos.
Para finalizar o conjunto de votos, tem-se o valor zero e, para códigos inválidos, o programa deverá
mostrar uma mensagem.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int codigo[100000], candidato[4], quant_votos_cada_candidato=0, quant_votos_nulos=0, quant_votos_brancos=0, quant_votos_feitos=0;
	float percent_votos_nulos, percent_votos_brancos;
	
	for (int i=0;i<100000;i++) {
		printf("\tOla, eleitor(a) %i! Em qual candidato deseja votar?\n", i+1);
		printf("\n\t\t| (1) - candidato 1 |\n\t\t| (2) - candidato 2 |\n\t\t| (3) - candidato 3 |\n\t\t| (4) - candidato 4 |\n\t\t| (5) - Voto nulo   |\n\t\t| (6) - Voto branco |\n");
		printf("\nDigite aqui: ");
		scanf("%i", &codigo[i]);
		
		if (codigo[i] < 1) {
			printf("\n\n\tEncerrando a urna de eleicao...\n\n");
			break;
		}
		
		if (codigo[i] != 1 && codigo[i] != 2 && codigo[i] != 3 && codigo[i] != 4 && codigo[i] != 5 && codigo[i] != 6) {
			while (codigo[i] != 1 && codigo[i] != 2 && codigo[i] != 3 && codigo[i] != 4 && codigo[i] != 5 && codigo[i] != 6) {
				system("cls");
				
				printf("\tOla, eleitor(a) %i! Em qual candidato deseja votar?\n", i+1);
        		printf("\n\t\t| (1) - candidato 1 |\n\t\t| (2) - candidato 2 |\n\t\t| (3) - candidato 3 |\n\t\t| (4) - candidato 4 |\n\t\t| (5) - Voto nulo   |\n\t\t| (6) - Voto branco |\n");
    	    	printf("\n\tCandidato nao encontrado... Tente novamente!\n");
				printf("\nDigite aqui: ");
    	    	scanf("%i", &codigo[i]);
				
			}
		}
		
		quant_votos_feitos++;
		system("cls");
	}
	
	// total de votos para cada candidato, nulos e brancos
	for (int i=0;i<quant_votos_feitos;i++) {
		if (codigo[i] == 1) {
			candidato[0]++;
		} else if (codigo[i] == 2) {
			candidato[1]++;
		} else if (codigo[i] == 3) {
			candidato[2]++;
		} else if (codigo[i] == 4) {
			candidato[3]++;
		} else if (codigo[i] == 5) {
			quant_votos_nulos++;
		} else if (codigo[i] == 6) {
			quant_votos_brancos++;
		}
	}
	// para cada candidato
	for (int i=0;i<4;i++) {
		printf("\nO candidato %i obteve %i votos", i+1, candidato[i]);
	}
	// para nulos e brancos
	printf("\nEleitores que votaram em 'NULO': %i", quant_votos_nulos);
	printf("\nEleitores que votaram em 'BRANCO': %i", quant_votos_brancos);
	//
	
	// porcentagem de votos nulos e brancos
	percent_votos_nulos = ((float)quant_votos_nulos/(float)quant_votos_feitos)*100;
	printf("\nA porcentagem de votos 'NULOS' da eleicao eh %.0f%%", percent_votos_nulos);
	percent_votos_brancos = ((float)quant_votos_brancos/(float)quant_votos_feitos)*100;
	printf("\nA porcentagem de votos 'BRANCOS' da eleicao eh %.0f%%\n\n", percent_votos_brancos);
	
	system("pause");
	return 0;
}