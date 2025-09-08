/* 11. Faça um programa que receba o valor de um carro e mostre uma tabela com os seguintes dados: 
preço final, quantidade de parcelas e valor da parcela. 
Considere o seguinte:
■ o preço final para compra à vista tem desconto de 20%;
■ a quantidade de parcelas pode ser: 6, 12, 18, 24, 30, 36, 42, 48, 54 e 60; e
■ os percentuais de acréscimo encontram-se na tabela a seguir.

QUANTIDADE DE PARCELAS                 PERCENTUAL DE ACRÉSCIMO SOBRE O PREÇO FINAL
         6                                                 3%
        12                                                 6%
        18                                                 9%
        24                                                12%
        30                                                15%
        36                                                18%
        42                                                21%
        48                                                24%
        54                                                27%
        60                                                30%
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float valor_carro, preco_final, valor_parcela;
	int quant_parcelas, percentual_acrescimo, forma_pagamento;
	
	printf("\n\tOla! Seja bem-vindo(a) a concessionaria!\n");
	printf("\n\tDigite o valor do carro que deseja comprar:\n\t\tObs: Valor minimo -> R$75000.00\n\n\n");
	printf("\nR$ ");
	scanf("%f", &valor_carro);
	
	if (valor_carro < 75000) {
		
		while (valor_carro < 75000) {
			system("cls");
		
    		printf("\n\tOla! Seja bem-vindo(a) a concessionaria!\n");
   		    printf("\n\tDigite o valor do carro que deseja comprar:\n\t\tObs: Valor minimo --> R$75000.00\n");
   			printf("\nNao foi possivel encontrar um carro de 'R$%.2f'... Tente de novo!\n", valor_carro);
   		    printf("\nR$");
   		    scanf("%f", &valor_carro);
		}
	}
	
	printf("\nComo sera o pagamento?\n");
	printf("\n\t\t| (1) -   A vista  |\n\t\t| (2) -  Parcelado |\n\n");
	printf("\nDigite aqui: ");
	scanf("%i", &forma_pagamento);
	
	if (forma_pagamento != 1 && forma_pagamento != 2) {
		while (forma_pagamento != 1 && forma_pagamento != 2) {
			system("cls");
			
			printf("\nComo sera o pagamento?\n");
        	printf("\n\t\t| (1) -   A vista  |\n\t\t| (2) -  Parcelado |\n");
			printf("\nNenhuma opcao '%i' encontrada... Tente de novo!\n", forma_pagamento);
        	printf("\nDigite aqui: ");
        	scanf("%i", &forma_pagamento);
		}
	}
	
	switch (forma_pagamento) {
		case 1:
			system("cls");
			preco_final = valor_carro - (valor_carro*0.20);
		    printf("\n\t ---------------------- Tabela dos Valores ------------------------ ");
			printf("\n\t __________________________________________________________________ \n");
			printf("\n\t|    PRECO FINAL   |  QUANTIDADE DE PARCELAS | VALOR DA PARCELA |");
			printf("\n\t|     %.2f    |            %i            |       %.2f       |\n\n", preco_final, quant_parcelas=0, valor_parcela=0);
			printf("\nEfetuando o pagamento a vista, o carro de R$%.2f passara a ser R$%.2f!\n\n", valor_carro, preco_final);
			
			break;
				
		case 2:
			system("cls");
			
			printf("\n\t| QUANTIDADE DE PARCELAS | PERCENTUAL DE ACRESCIMO SOBRE O PRECO FINAL |");
       		printf("\n\t|           6            |                    3%%                       |");
        	printf("\n\t|          12            |                    6%%                       |");
        	printf("\n\t|          18            |                    9%%                       |");
	       	printf("\n\t|          24            |                   12%%                       |");
	        printf("\n\t|          30            |                   15%%                       |");
	        printf("\n\t|          36            |                   18%%                       |");
            printf("\n\t|          42            |                   21%%                       |");
        	printf("\n\t|          48            |                   24%%                       |");
        	printf("\n\t|          54            |                   27%%                       |");
        	printf("\n\t|          60            |                   30%%                       |\n");
	    	printf("\nEscolha a quantidade de parcelas que deseja:\n");
    		printf("\nDigite aqui: ");
			scanf("%i", &quant_parcelas);
			
			if (quant_parcelas != 6 && quant_parcelas != 12 && quant_parcelas != 18 && quant_parcelas != 24 && quant_parcelas != 30 
			&& quant_parcelas != 36 && quant_parcelas != 42 && quant_parcelas != 48 && quant_parcelas != 54 && quant_parcelas != 60) {
				
				while (quant_parcelas != 6 && quant_parcelas != 12 && 
				quant_parcelas != 18 && quant_parcelas != 24 && 
				quant_parcelas != 30 && quant_parcelas != 36 && 
				quant_parcelas != 42 && quant_parcelas != 48 && 
				quant_parcelas != 54 &&	quant_parcelas != 60) {
					
					system("cls");
					
					printf("\n\t| QUANTIDADE DE PARCELAS | PERCENTUAL DE ACRESCIMO SOBRE O PRECO FINAL |");
        			printf("\n\t|           6            |                    3%%                       |");
	       			printf("\n\t|          12            |                    6%%                       |");
	       			printf("\n\t|          18            |                    9%%                       |");
		       		printf("\n\t|          24            |                   12%%                       |");
		       		printf("\n\t|          30            |                   15%%                       |");
		       		printf("\n\t|          36            |                   18%%                       |");
		       		printf("\n\t|          42            |                   21%%                       |");
		       		printf("\n\t|          48            |                   24%%                       |");
		       		printf("\n\t|          54            |                   27%%                       |");
		       		printf("\n\t|          60            |                   30%%                       |\n");
		       		printf("\nEscolha a quantidade de parcelas que deseja:\n");
		       		printf("\n\tQuantidade de parcelas '%i' nao disponivel... Tente de novo!\n", quant_parcelas);
		        	printf("\nDigite aqui: ");
		        	scanf("%i", &quant_parcelas);
				}
			}
			
			if (quant_parcelas == 6) {
				percentual_acrescimo = valor_carro * (1+0.06);
				preco_final = valor_carro + percentual_acrescimo;
				valor_parcela = preco_final / 6.0;
			    
				printf("\n\t ---------------------- Tabela dos Valores ------------------------ ");
			    printf("\n\t __________________________________________________________________ \n");
			    printf("\n\t    PRECO FINAL   |  QUANTIDADE DE PARCELAS |  VALOR DA PARCELA ");
			    printf("\n\t     %.2f    |            %i            |       %.2f       \n\n", preco_final, quant_parcelas=6, valor_parcela);
				
			} else if (quant_parcelas == 12) {
				percentual_acrescimo = valor_carro * (1+0.12);
				preco_final = valor_carro + percentual_acrescimo;
				valor_parcela = preco_final / 12.0;
			    
				printf("\n\t ---------------------- Tabela dos Valores ------------------------ ");
			    printf("\n\t __________________________________________________________________ \n");
			    printf("\n\t    PRECO FINAL   |  QUANTIDADE DE PARCELAS |  VALOR DA PARCELA ");
			    printf("\n\t     %.2f    |            %i           |       %.2f       \n\n", preco_final, quant_parcelas=12, valor_parcela);
				
			} else if (quant_parcelas == 18) {
				percentual_acrescimo = valor_carro * (1+0.18);
				preco_final = valor_carro + percentual_acrescimo;
				valor_parcela = preco_final / 18.0;
			    
				printf("\n\t ---------------------- Tabela dos Valores ------------------------ ");
			    printf("\n\t __________________________________________________________________ \n");
			    printf("\n\t    PRECO FINAL   |  QUANTIDADE DE PARCELAS |  VALOR DA PARCELA ");
			    printf("\n\t     %.2f    |            %i           |       %.2f       \n\n", preco_final, quant_parcelas=18, valor_parcela);
				
			} else if (quant_parcelas == 24) {
				percentual_acrescimo = valor_carro * (1+0.24);
				preco_final = valor_carro + percentual_acrescimo;
				valor_parcela = preco_final / 24.0;
			    
				printf("\n\t ---------------------- Tabela dos Valores ------------------------ ");
			    printf("\n\t __________________________________________________________________ \n");
			    printf("\n\t    PRECO FINAL   |  QUANTIDADE DE PARCELAS |  VALOR DA PARCELA ");
			    printf("\n\t     %.2f    |            %i           |       %.2f       \n\n", preco_final, quant_parcelas=24, valor_parcela);
				
			} else if (quant_parcelas == 30) {
				percentual_acrescimo = valor_carro * (1+0.30);
				preco_final = valor_carro + percentual_acrescimo;
				valor_parcela = preco_final / 30.0;
			    
				printf("\n\t ---------------------- Tabela dos Valores ------------------------ ");
			    printf("\n\t __________________________________________________________________ \n");
			    printf("\n\t    PRECO FINAL   |  QUANTIDADE DE PARCELAS |  VALOR DA PARCELA ");
			    printf("\n\t     %.2f    |            %i           |       %.2f       \n\n", preco_final, quant_parcelas=30, valor_parcela);
				
			} else if (quant_parcelas == 36) {
				percentual_acrescimo = valor_carro * (1+0.36);
				preco_final = valor_carro + percentual_acrescimo;
				valor_parcela = preco_final / 36.0;
			    
				printf("\n\t ---------------------- Tabela dos Valores ------------------------ ");
			    printf("\n\t __________________________________________________________________ \n");
			    printf("\n\t    PRECO FINAL   |  QUANTIDADE DE PARCELAS |  VALOR DA PARCELA ");
			    printf("\n\t     %.2f    |            %i           |       %.2f       \n\n", preco_final, quant_parcelas=36, valor_parcela);
					
			} else if (quant_parcelas == 42) {
				percentual_acrescimo = valor_carro * (1+0.42);
				preco_final = valor_carro + percentual_acrescimo;
				valor_parcela = preco_final / 42.0;
			    
				printf("\n\t ---------------------- Tabela dos Valores ------------------------ ");
			    printf("\n\t __________________________________________________________________ \n");
			    printf("\n\t    PRECO FINAL   |  QUANTIDADE DE PARCELAS |  VALOR DA PARCELA ");
			    printf("\n\t     %.2f    |            %i           |       %.2f       \n\n", preco_final, quant_parcelas=42, valor_parcela);
				
			} else if (quant_parcelas == 48) {
				percentual_acrescimo = valor_carro * (1+0.48);
				preco_final = valor_carro + percentual_acrescimo;
				valor_parcela = preco_final / 48.0;
			    
				printf("\n\t ---------------------- Tabela dos Valores ------------------------ ");
			    printf("\n\t __________________________________________________________________ \n");
			    printf("\n\t    PRECO FINAL   |  QUANTIDADE DE PARCELAS |  VALOR DA PARCELA ");
			    printf("\n\t     %.2f    |            %i           |       %.2f       \n\n", preco_final, quant_parcelas=48, valor_parcela);
				
			} else if (quant_parcelas == 54) {
				percentual_acrescimo = valor_carro * (1+0.54);
				preco_final = valor_carro + percentual_acrescimo;
				valor_parcela = preco_final / 54.0;
			    
				printf("\n\t ---------------------- Tabela dos Valores ------------------------ ");
			    printf("\n\t __________________________________________________________________ \n");
			    printf("\n\t    PRECO FINAL   |  QUANTIDADE DE PARCELAS |  VALOR DA PARCELA ");
			    printf("\n\t     %.2f    |            %i           |       %.2f       \n\n", preco_final, quant_parcelas=54, valor_parcela);
				
			} else if (quant_parcelas == 60) {
				percentual_acrescimo = valor_carro * (1+0.60);
				preco_final = valor_carro + percentual_acrescimo;
				valor_parcela = preco_final / 60.0;
			    
				printf("\n\t ---------------------- Tabela dos Valores ------------------------ ");
			    printf("\n\t __________________________________________________________________ \n");
			    printf("\n\t    PRECO FINAL   |  QUANTIDADE DE PARCELAS |  VALOR DA PARCELA ");
			    printf("\n\t     %.2f    |            %i           |       %.2f       \n\n", preco_final, quant_parcelas=60, valor_parcela);
				
			}
			
			break;				
	}
	
	system("pause");
	return 0;
}