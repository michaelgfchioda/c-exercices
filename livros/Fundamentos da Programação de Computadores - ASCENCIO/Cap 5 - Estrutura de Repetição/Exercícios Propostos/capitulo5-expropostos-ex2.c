/* 2. Uma companhia de teatro deseja montar uma série de espetáculos. 
A direção calcula que, a R$ 5,00 o ingresso, serão vendidos 120 ingressos, 
e que as despesas serão de R$ 200,00. 
Diminuindo-se em R$ 0,50 o preço dos ingressos, espera-se que as vendas aumentem em 26 ingressos. 
Faça um programa que escreva uma tabela de valores de lucros esperados em função do preço do ingresso, 
fazendo-se variar esse preço de R$ 5,00 a R$ 1,00, de R$ 0,50 em R$ 0,50. 
Escreva, ainda, para cada novo preço de ingresso, o lucro máximo esperado, 
o preço do ingresso e a quantidade de ingressos vendidos para a obtenção desse lucro.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float preco_ingresso=5, novo_preco_ingresso=0, lucro_maximo;
	int quant_ingressos_vendidos=120;
	
	printf("\n\t ------------------  Tabela de Valores  ------------------ ");
	printf("\n\t _________________________________________________________ ");
	printf("\n\t| VALOR DO INGRESSO | QUANTIDADE DE VENDAS | LUCRO MAXIMO |");
	printf("\n\t|                   |                      |              |");
	printf("\n\t|       5.00        |         120          |    600.00    |");
	
	do {
		
		preco_ingresso = preco_ingresso - 0.50;
		quant_ingressos_vendidos = quant_ingressos_vendidos + 26;
		lucro_maximo = preco_ingresso * quant_ingressos_vendidos;
		printf("\n\t|       %.2f        |         %i          |    %.2f    |", preco_ingresso, quant_ingressos_vendidos, lucro_maximo);
		
	} while (preco_ingresso > 1);
	printf("\n\t-----------------------------------------------------------");
	
	printf("\n\n\n");
	
	
	system("pause");
	return 0;
}