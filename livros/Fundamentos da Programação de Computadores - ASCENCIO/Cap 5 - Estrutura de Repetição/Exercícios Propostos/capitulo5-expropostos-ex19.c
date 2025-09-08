/* 19. Faça um programa que receba o tipo da ação, ou seja, uma letra a ser comercializada na bolsa de valores,
o preço de compra e o preço de venda de cada ação e que calcule e mostre:
■ o lucro de cada ação comercializada;
■ a quantidade de ações com lucro superior a R$ 1.000,00;
■ a quantidade de ações com lucro inferior a R$ 200,00;
■ o lucro total da empresa.
Finalize com o tipo de ação ‘F’.*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	char tipo_de_acao[50];
	float preco_de_compra[50], preco_venda[50], lucro_de_cada_acao[50], lucro_total_empresa=0;
	int quant_acoes_empresa=0, quant_acoes_lucro_sup_1000=0, quant_acoes_lucro_inf_200=0;
	
	for (int i=0;i<50;i++) {
		printf("\tOla! Digite uma letra que represente os tipos de acao na bolsa de valores!\n");
	    printf("\n%i tipo de acao: ", i+1);
	    scanf(" %c", &tipo_de_acao[i]);
	    
	    if (!isalpha(tipo_de_acao[i])) {
	    	while (!isalpha(tipo_de_acao[i])) {
	    		system("cls");
	    		
	    		printf("\tErro! Voce digitou um numero ou caractere especial... Tente de novo!\n");
	    		printf("\n%i tipo de acao: ", i+1);
	            scanf(" %c", &tipo_de_acao[i]);
			}
		}
	    
	    if (tipo_de_acao[i] == 'F' || tipo_de_acao[i] == 'f') {
	    	printf("\n\n\n\tInformacoes salvas com sucesso!\n\n");
	    	break;
	    }
	    
	    // quantos tipos de acoes foram digitados ate 'F / f'
	    quant_acoes_empresa++;
	    
	    printf("\nValor de compra da moeda '%c': R$", tipo_de_acao[i]);
	    scanf("%f", &preco_de_compra[i]);
	    
	    printf("\nValor da venda da moeda '%c': R$", tipo_de_acao[i]);
	    scanf("%f", &preco_venda[i]);
	    
	    printf("\n\n\n\tSalvando informacoes...\n\n");
	    
	    system("pause");
	    system("cls");
    }
	
	printf("\t---- Resultados da empresa ----\n");
	// lucro de cada acao da empresa
	for (int i=0;i<quant_acoes_empresa;i++) {
		lucro_de_cada_acao[i] = preco_venda[i] - preco_de_compra[i];
		printf("\nCom a moeda '%c' a empresa obteve lucro de R$%.2f\n", tipo_de_acao[i], lucro_de_cada_acao[i]);
		
		// A quantidade de ações com lucro superior a R$ 1.000,00;
		if (lucro_de_cada_acao[i] > 1000) {
			quant_acoes_lucro_sup_1000++;
		}
		// A quantidade de ações com lucro inferior a R$ 200,00;
		if (lucro_de_cada_acao[i] < 201) {
			quant_acoes_lucro_inf_200++;
		}
		
		// Lucro total da empresa
		lucro_total_empresa += lucro_de_cada_acao[i];
	}
	
	printf("\nA quantidade de acoes com lucro superior a R$1000.00: %i", quant_acoes_lucro_sup_1000);
	printf("\nA quantidade de acoes com lucro inferior a R$200.00: %i", quant_acoes_lucro_inf_200);
	printf("\nO lucro total da empresa eh de R$%.2f\n\n", lucro_total_empresa);
	
	system("pause");
	return 0;
}