/* 25. Uma agência bancária possui vários clientes que podem fazer investimentos com rendimentos mensais,
conforme a tabela a seguir:
        TIPO       DESCRIÇÃO       RENDIMENTO MENSAL
         1         Poupança              1,5%
         2       Poupança plus            2%
         3    Fundos de renda fixa        4%
Faça um programa que leia o código do cliente, o tipo do investimento e o valor investido, e que calcule
e mostre o rendimento mensal de acordo com o tipo do investimento.
No final, o programa deverá mostrar o total investido e o total de juros pagos.
A leitura terminará quando o código do cliente digitado for menor ou igual a 0.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int codigo_cliente[100000], tipo_investimento[100000], quant_clientes_usou=0;
	float valor_investido[100000], rendimento_mensal_por_tipo[3]={0}, total_investido=0, total_juros_pagos;
	
	for (int i=0;i<100000;i++) {
		printf("\n\tOla, cliente! Seja bem-vindo a nossa Agencia Bancaria!\n");
		printf("\nDigite seu codigo, cliente %i: ", i+1);
		scanf("%i", &codigo_cliente[i]);
		
		if (codigo_cliente[i] < 1) {
			printf("\n\n\tEncerrando o sistema...\n\n");
			break;
		}
		
		printf("\n\t\t| TIPO       DESCRICAO       RENDIMENTO MENSAL |\n\t\t|  1         Poupanca               1,5%%       |\n\t\t|  2       Poupanca plus             2%%        |\n\t\t|  3    Fundos de renda fixa         4%%        |\n");
		printf("\nTipo de investimento, cliente %i: ", i+1);
		scanf("%i", &tipo_investimento[i]);
		
		if (tipo_investimento[i] != 1 && tipo_investimento[i] != 2 && tipo_investimento[i] != 3) {
			while (tipo_investimento[i] != 1 && tipo_investimento[i] != 2 && tipo_investimento[i] != 3) {
				system("cls");
				
				printf("\n\tNenhum tipo de investimento '%i' encontrado... Tente de novo!\n", tipo_investimento[i]);
				printf("\n\t\t| TIPO       DESCRICAO       RENDIMENTO MENSAL |\n\t\t|  1         Poupanca               1,5%%       |\n\t\t|  2       Poupanca plus             2%%        |\n\t\t|  3    Fundos de renda fixa         4%%        |\n");
		        printf("\nTipo de investimento, cliente %i: ", i+1);
		        scanf("%i", &tipo_investimento[i]);
			}
		}
		
		printf("\nValor que sera investido, cliente %i: R$", i+1);
		scanf("%f", &valor_investido[i]);
		
		// rendimento mensal de acordo com o tipo do investimento, total investido e juros pagos
		if (tipo_investimento[i] == 1) {
			rendimento_mensal_por_tipo[0] += valor_investido[i] * 0.015;
			printf("\n\nInvestindo R$%.2f por mes, cliente %i obteve R$%.2f de rendimento!\n\n", valor_investido[i], codigo_cliente[i], rendimento_mensal_por_tipo[0]);
			total_investido += valor_investido[i];
			total_juros_pagos += rendimento_mensal_por_tipo[0];
			
		} else if (tipo_investimento[i] == 2) {
			rendimento_mensal_por_tipo[1] += valor_investido[i] * 0.02;
			printf("\n\nInvestindo R$%.2f por mes, cliente %i obteve R$%.2f de rendimento!\n\n", valor_investido[i], codigo_cliente[i], rendimento_mensal_por_tipo[1]);
			total_investido += valor_investido[i];
			total_juros_pagos += rendimento_mensal_por_tipo[1];
			
		} else if (tipo_investimento[i] == 3) {
			rendimento_mensal_por_tipo[2] += valor_investido[i] * 0.04;
			printf("\n\nInvestindo R$%.2f por mes, cliente %i obteve R$%.2f de rendimento!\n\n", valor_investido[i], codigo_cliente[i], rendimento_mensal_por_tipo[2]);
			total_investido += valor_investido[i];
			total_juros_pagos += rendimento_mensal_por_tipo[2];
			
		}
		
		printf("\n\n");
		
		system("pause");
		system("cls");
	}
	
	printf("\nValor total de investimento: R$%.2f", total_investido);
	printf("\nValor total de juros pagos: R$%.2f\n\n", total_juros_pagos);
	
	system("pause");
	return 0;
}