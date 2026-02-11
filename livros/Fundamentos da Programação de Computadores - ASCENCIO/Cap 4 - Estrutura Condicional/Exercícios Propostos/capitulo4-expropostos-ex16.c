/* 16. Uma empresa decide aplicar descontos nos seus preços usando a tabela a seguir.
    Faça um programa que receba o preço atual de um produto e seu código, 
    calcule e mostre o valor do desconto e o novo preço.

    PREço ATuAL                 % DE DESCoNTo
Até R$ 30,00                     Sem desconto
Entre R$ 30,00 e R$ 100,00          10%
Acima de R$ 100,00                  15%
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    float preco_atual, percentual_desconto, novo_preco;
    int codigo_produto;

    printf("\n\tOla! Digite abaixo o preco e o codigo de um produto:\n");
    printf("\n\tR$");
    scanf("%f", &preco_atual);
    printf("\tCodigo do produto: ");
    scanf("%i", &codigo_produto);

    if (preco_atual <= 30.00) {
        percentual_desconto = 0.00;
        novo_preco = preco_atual - (preco_atual * percentual_desconto);
    } else if (preco_atual > 30.00 && preco_atual <= 100.00) {
        percentual_desconto = 0.10;
        novo_preco = preco_atual - (preco_atual * percentual_desconto);
    } else {
        percentual_desconto = 0.15;
        novo_preco = preco_atual - (preco_atual * percentual_desconto);
    }
                                                                                                                                        // O valor de percentual_desconto é multiplicado por 100 para ser exibido em porcentagem  
    printf("\n\tO produto cujo o codigo eh %i, com o preco de R$%.2f, recebera um desconto de %.0f%%,\n\te seu novo preco sera de R$%.2f\n\n", codigo_produto, preco_atual, percentual_desconto * 100, novo_preco);

    system("pause");
    return 0;
}