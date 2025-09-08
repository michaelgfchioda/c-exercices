/* 23. Faça um programa que apresente o menu de opções a seguir, 
que permita ao usuário escolher a opção desejada, 
receba os dados necessários para executar a operação e mostre o resultado. 
Verifique a possibilidade de opção inválida e não se preocupe com as restrições como salário inválido.
Menu de opções:
1. Novo salário
2. Férias
3. Décimo terceiro
4. Sair
Digite a opção desejada.
Na opção 1: receber o salário de um funcionário, calcular e mostrar o novo salário usando as regras a seguir:
        SALÁRIOS              PERCENTAGEM DE AUMENTO
     Até R$ 210,00                      15%
 De R$ 210,00 a R$ 600,00(inclusive)    10%
    Acima de R$ 600,00                  5%
Na opção 2: receber o salário de um funcionário, calcular e mostrar o valor de suas férias. 
Sabe-se que as férias equivalem a seu salário acrescido de um terço do salário.
Na opção 3: receber o salário de um funcionário e o número de meses de trabalho na empresa, 
no máximo doze, calcular e mostrar o valor do décimo terceiro. 
Sabe-se que o décimo terceiro equivale a seu salário multiplicado pelo número de meses de trabalho dividido por 12.
Na opção 4: sair do programa. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int opcao, num_meses_de_trabalho=0;
	float salario_funcionario, novo_salario_funcionario, valor_ferias_funcionario, decimo_terceiro; 
	
	while (opcao != 4) {
		printf("\n\tOla, funcionario! Escolha uma das opcoes abaixo\n");
	    printf("\n\t\t| (1) -  Novo salario   |");
	    printf("\n\t\t| (2) -     Ferias      |");
	    printf("\n\t\t| (3) - Decimo terceiro |");
	    printf("\n\t\t| (4) -      Sair       |\n");
	    printf("\nDigite aqui: ");
	    scanf("%i", &opcao);
	    
	    while (opcao > 4 && opcao < 1) {
	    	system("cls");
	    	
	    	printf("\n\tOpacao '%i' invalida... Tente de novo!\n", opcao);
	    	printf("\n\t| (1) -  Novo salario   |");
	        printf("\n\t| (2) -     Ferias      |");
	        printf("\n\t| (3) - Decimo terceiro |");
	        printf("\n\t| (4) -      Sair       |\n");
	        printf("\nDigite aqui: ");
	        scanf("%i", &opcao);
		}
	    
	   	switch (opcao) {
	    	case 1:
	    		printf("\nDigite aqui seu salario: R$");
	    		scanf("%f", &salario_funcionario);
	    		
	    		if (salario_funcionario < 211) {
	    			novo_salario_funcionario = salario_funcionario + (salario_funcionario * 0.15);
				} else if (salario_funcionario > 209 && salario_funcionario < 601) {
					novo_salario_funcionario = salario_funcionario + (salario_funcionario *  0.10);
				} else if (salario_funcionario > 600) {
					novo_salario_funcionario = salario_funcionario + (salario_funcionario * 0.05);
				}
				printf("\nSeu salario de R$%.2f passara a ser R$%.2f\n\n\n", salario_funcionario, novo_salario_funcionario);
				system("pause");
	    		break;
	    			
	   		case 2:
	    		printf("\nDigite aqui seu salario: R$");
	        	scanf("%f", &salario_funcionario);
				valor_ferias_funcionario = salario_funcionario + (salario_funcionario/3);
	    		printf("\nO valor de suas ferias sera de R$%.2f\n\n\n", valor_ferias_funcionario);
	    		system("pause");
				break;
	    	case 3:
	    		printf("\nDigite aqui seu salario: R$");
	    		scanf("%f", &salario_funcionario);
	    	    printf("\nDigite aqui o numero de meses que trabalhou na empresa: ");
	    	    scanf("%i", &num_meses_de_trabalho);
	    		    
	    	    while (num_meses_de_trabalho > 12) {
	    	    	system("cls");
	    	    	
					printf("\n\tO maximo sao 12 meses... Digite novamente\n");
	    	    	printf("\nDigite aqui o numero de meses que trabalhou na empresa: ");
	    	        scanf("%i", &num_meses_de_trabalho);
				}
				decimo_terceiro = salario_funcionario * ((float)num_meses_de_trabalho/12);
				
				printf("\nO valor do decimo terceiro sera de R$%.2f\n\n\n", decimo_terceiro);
				system("pause");
				break;
			case 4:
	    		printf("\n\tEncerrando o programa...\n\n");
	    		break;
		}
		system("cls");
	}
	
	system("pause");
	return 0;
}