/* 9. Um banco concederá um crédito especial aos seus clientes, de acordo com o saldo médio no último ano.
    Faça um programa que receba o saldo médio de um cliente e calcule o valor do crédito, de acordo com a tabela a seguir. 
    Mostre o saldo médio e o valor do crédito.

    SALDO MÉDIO                 PERCENTUAL
Acima de R$ 400,00          30% do saldo médio
R$ 400,00  R$ 300,00        25% do saldo médio
R$ 300,00  R$ 200,00        20% do saldo médio
Até R$ 200,00               10% do saldo médio

*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    float saldo_medio, valor_credito;

    printf("\n\tOla! Digite o valor de seu saldo medio: R$");
    scanf("%f", &saldo_medio);

    if (saldo_medio > 400) {
        valor_credito = saldo_medio * 0.30;
    } else if (saldo_medio > 300 && saldo_medio < 400) {
        valor_credito = saldo_medio * 0.25;
    } else if (saldo_medio > 200 && saldo_medio < 300) {
        valor_credito = saldo_medio * 0.20;
    } else {
        valor_credito = saldo_medio * 0.10;
    }

    printf("\nO valor do credito concedido eh: R$%.2f\n", valor_credito);
    
    system("pause");
    return 0;
}