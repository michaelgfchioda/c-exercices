/* 6. Uma loja utiliza o código V para transação à vista e P para transação a prazo. 
Faça um programa que receba o código e o valor de quinze transações, calcule e mostre:
■ o valor total das compras à vista;
■ o valor total das compras a prazo;
■ o valor total das compras efetuadas;
■ o valor da primeira prestação das compras a prazo juntas, sabendo-se que serão pagas em três vezes. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char transacao;
	int codigo[15], avista=0, aprazo=0;
	float valor[15], valor_total=0, valor_total_v=0, valor_total_p=0;
	float primeira_prestacao=0;
	
	for (int i=0;i<15;i++) {
		printf("Ola, sr. cliente %i!\n", i+1);
		printf("\n\tV - A vista\n\tP - Prazo\n\nComo deseja realizar a transacao? ");
	    scanf(" %c", &transacao);
	    printf("Codigo: ");
	    scanf("%i", &codigo[i]);
	    printf("Valor: R$");
	    scanf("%f", &valor[i]);
	    	
	   	if (transacao == 'V' || transacao == 'v') {
		    valor_total_v = valor_total_v + valor[i];
						
	    } else if (transacao == 'P' || transacao == 'p') {
	    	valor_total_p = valor_total_p + valor[i];
	    	
		} else {
			printf("\nEssa opcao de transacao eh inexistente...\n\n");
		}
		
		printf("\n\n");
		
		system("pause");
		system("cls");
	}
    
	valor_total = valor_total_v + valor_total_p;
	primeira_prestacao = valor_total_p / 3;
	
    printf("\nO valor total a vista eh R$%.2f", valor_total_v);
    printf("\nO valor total a prazo eh R$%.2f", valor_total_p);
    printf("\nO valor total gasto eh R$%.2f", valor_total);
	printf("\nO valor da primeira prestacao sera de R$%.2f\n\n", primeira_prestacao);
	
	system("pause");
	return 0;
}