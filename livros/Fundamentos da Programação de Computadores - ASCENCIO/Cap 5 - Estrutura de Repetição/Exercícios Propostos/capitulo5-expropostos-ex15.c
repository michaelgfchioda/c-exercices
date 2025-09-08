/* 110. Uma empresa fez uma pesquisa de mercado para saber se as pessoas gostaram ou não de um novo produto lançado. 
Para isso, forneceu o sexo do entrevistado e sua resposta (S — sim; ou N — não). 
Sabe-se que foram entrevistadas dez pessoas.
Faça um programa que calcule e mostre:
■ o número de pessoas que responderam sim;
■ o número de pessoas que responderam não;
■ o número de mulheres que responderam sim; e
■ a percentagem de homens que responderam não, entre todos os homens analisados.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char pessoas_avaliadas[10], sexo[10];
	int num_pessoas_sim=0, num_pessoas_nao=0, num_mulheres_sim=0;
	float percent_homens_nao, soma_hms_nao=0, quant_homens=0;
	
	
	for (int i=0;i<10;i++) {
		printf("\tOla, entrevistado(a)! Voce gostou do novo lancamento?\n\n");	    
	    printf("\t\t|---- Avaliacao ----|\t\t|----- Sexo -----|\t\t\n\t\t|      SIM - S\t    |\t\t|  Feminino - F  |\n\t\t|      NAO - N\t    |\t\t|  Masculino - M |\n\n");
	    printf("Respostas do entrevistado(a) %i:", i+1);
		printf("\nSexo: ");
		scanf(" %c", &sexo[i]);
		
		while (sexo[i] != 'f' && sexo[i] != 'F' && sexo[i] != 'm' && sexo[i] != 'M') {
			printf("\nSexo '%c' nao existe...\n", sexo[i]);
    		printf("\nSexo: ");
    		scanf(" %c", &sexo[i]);
    		
		}
		
		if (sexo[i] == 'm' || sexo[i] == 'M') {
			quant_homens++;
		}
		
		printf("Avaliacao: ");
		scanf(" %c", &pessoas_avaliadas[i]);
		
		while (pessoas_avaliadas[i] != 's' && pessoas_avaliadas[i] != 'S' && pessoas_avaliadas[i] != 'n' && pessoas_avaliadas[i] != 'N') {
			printf("\nOpcao inexistente...\n");
			printf("\nAvaliacao: ");
		    scanf(" %c", &pessoas_avaliadas[i]);
		}
		
		if (pessoas_avaliadas[i] == 's' || pessoas_avaliadas[i] == 'S') {
			num_pessoas_sim++;
		}
		
		if (pessoas_avaliadas[i] == 'n' || pessoas_avaliadas[i] == 'N') {
			num_pessoas_nao++;
		}
		
		system("cls");
	}
	
	for (int i=0;i<10;i++) {
		if (sexo[i] == 'f' || sexo[i] == 'F') {
			if (pessoas_avaliadas[i] == 's' || pessoas_avaliadas[i] == 'S') {
				num_mulheres_sim++;
			}
		} else if (sexo[i] == 'm' || sexo[i] == 'M') {
			if (pessoas_avaliadas[i] == 'n' || pessoas_avaliadas[i] == 'N') {
				soma_hms_nao++;
			}
		}
	}
	
	percent_homens_nao = (soma_hms_nao/quant_homens)*100;
	
	printf("\nO numero de pessoas que responderam 'SIM': %i pessoas", num_pessoas_sim);
	printf("\nO numero de pessoas que responderam 'NAO': %i pessoas", num_pessoas_nao);
	printf("\nO numero de MULHERES que responderam 'SIM': %i mulheres", num_mulheres_sim);
	printf("\nA porcentagem de HOMENS que responderam 'NAO': %.2f%% dos homens\n\n", percent_homens_nao);		
	
	system("pause");
	return 0;
}