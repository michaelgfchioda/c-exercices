/* 18. Foi feita uma pesquisa entre os habitantes de uma região. 
Foram coletados os dados de idade, sexo (M/F) e salário. 
Faça um programa que calcule e mostre:
■ a média dos salários do grupo;
■ a maior e a menor idade do grupo;
■ a quantidade de mulheres com salário até R$ 200,00;
■ a idade e o sexo da pessoa que possui o menor salário.
Finalize a entrada de dados ao ser digitada uma idade negativa.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int idade[100], maior_idade_grupo=0, menor_idade_grupo=0, quant_mulher_sal_ate_200=0, quant_pessoas_grupo=0;
	char sexo[100];
	float salario[100], soma_salario=0, media_sal_grupo, menor_salario=0;
	
	printf("\tOla! Seja bem-vindo(a) a nossa pesquisa!\n");
	for (int i=0;i<100;i++) {
		printf("\nIdade habitante %i: ", i+1);
		scanf("%i", &idade[i]);
		
		if (idade[i] < 1) {
			system("cls");
			
			printf("\n\n\tEncerrando a pesquisa...\n\n");
			break;
		}
		
		printf("\n\t|M - Masculino|\n\t|F - Feminino |\n\nSexo habitante %i: ", i+1);
    	scanf(" %c", &sexo[i]);
    	
    	while (sexo[i] != 'M' && sexo[i] != 'm' && sexo[i] != 'F' && sexo[i] != 'f') {
    		system("cls");
    		
    		printf("\tOla! Seja bem-vindo(a) a nossa pesquisa!\n");
    		printf("\nErro! 'Sexo' invalido... Digite de novo!\n");
    		printf("\n\t|M - Masculino|\n\t|F - Feminino |\n\nSexo habitante %i: ", i+1);
        	scanf(" %c", &sexo[i]);
		}
    	
    	printf("\nSalario habitante %i: ", i+1);
    	scanf("%f", &salario[i]);
    	
    	// somar salarios do grupo e quantidade de pessoas
    	soma_salario += salario[i];
    	quant_pessoas_grupo++;
		
		printf("\n\n\n\n\tAguarde... Os dados estao sendo registrados...\n\n", i+1);
		
		system("pause");
		system("cls");
		
		printf("\tOla! Seja bem-vindo(a) a nossa pesquisa!\n");
	}
	
	// média dos salarios do grupo
	media_sal_grupo = soma_salario / (float)quant_pessoas_grupo;
	printf("\nA media dos salarios do grupo: R$%.2f", media_sal_grupo);
	//
	
	// maior e menor idade do grupo
	maior_idade_grupo = idade[0];
	for (int i=1;i<quant_pessoas_grupo;i++) {
		if (idade[i] > maior_idade_grupo) {
			maior_idade_grupo = idade[i];
		}
	}
	printf("\nMaior idade do grupo: %i anos", maior_idade_grupo);
	
	menor_idade_grupo = idade[0];
	for (int i=1;i<quant_pessoas_grupo;i++) {
		if (idade[i] < menor_idade_grupo) {
			menor_idade_grupo = idade[i];
		}
	}
	printf("\nMenor idade do grupo: %i anos", menor_idade_grupo);
	//
	
	// mulheres com salário até R$200,00
	for (int i=0;i<quant_pessoas_grupo;i++) {
		if (sexo[i] == 'F' || sexo[i] == 'f') {
			if (salario[i] < 201) {
				quant_mulher_sal_ate_200++;
			}
		}
	}
	printf("\nQuantidade de mulheres com salario ate R$200.00: %i mulheres", quant_mulher_sal_ate_200);
	//
	
	// idade e sexo da pessoa com menor salario
	menor_salario = salario[0];
	for (int i=1;i<quant_pessoas_grupo;i++) {
		if (salario[i] < menor_salario) {
			menor_salario = salario[i];
		}
	}
	for (int i=0;i<quant_pessoas_grupo;i++) {
		if (menor_salario == salario[i]) {
			printf("\nA pessoa do sexo '%c' de %i anos tem o menor salario, sendo de R$%.2f\n\n", sexo[i], idade[i], salario[i]);
		}
	}
	//
	
	system("pause");
	return 0;
}