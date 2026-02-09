/* 13. Faça um programa que receba o preço de um produto, calcule e mostre, 
    de acordo com as tabelas a seguir, o novo preço e a classificação.

    TABELA 1 — PERCENTuAL DE AuMENTo
    PREço                           %
Até R$ 50,00                        5
Entre R$ 50,00 e R$ 100,00          10
Acima de R$ 100,00                  15

                TABELA 2 — CLASSIFICAçõES
    NoVo PREço                           CLASSIFICAção
Até R$ 80,00                                Barato
Entre R$ 80,00 e R$ 120,00 (inclusive)      Normal
Entre R$ 120,00 e R$ 200,00 (inclusive)     Caro
Maior que R$ 200,00                         Muito caro
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    float preco_produto, percentual_aumento, novo_preco;

    printf("\n\tOla! Digite o preco do produto que recebera o aumento:");
    printf("\n\tR$");
    scanf("%f", &preco_produto);

    if (preco_produto <= 50.00) {
        percentual_aumento = 0.05;
        novo_preco = preco_produto + (preco_produto * percentual_aumento);
    } else if (preco_produto > 50.00 && preco_produto <= 100.00) {
        percentual_aumento = 0.10;
        novo_preco = preco_produto + (preco_produto * percentual_aumento);
    } else {
        percentual_aumento = 0.15;
        novo_preco = preco_produto + (preco_produto * percentual_aumento);
    }
                                                                                                    // * 100 para mostrar o percentual em porcentagem, e nao em decimal
    if (novo_preco <= 80.00) {
        printf("\n\tCom o aumento de %.0f%%, o preco do produto foi de R$%.2f para R$%.2f. Classificacao: Barato\n\n", percentual_aumento * 100, preco_produto, novo_preco);
    } else if (novo_preco > 80.00 && novo_preco <= 120.00) {
        printf("\n\tCom o aumento de %.0f%%, o preco do produto foi de R$%.2f para R$%.2f. Classificacao: Normal\n\n", percentual_aumento * 100, preco_produto, novo_preco);
    } else if (novo_preco > 120.00 && novo_preco <= 200.00) {
        printf("\n\tCom o aumento de %.0f%%, o preco do produto foi de R$%.2f para R$%.2f. Classificacao: Caro\n\n", percentual_aumento * 100, preco_produto, novo_preco);
    } else {
        printf("\n\tCom o aumento de %.0f%%, o preco do produto foi de R$%.2f para R$%.2f. Classificacao: Muito caro\n\n", percentual_aumento * 100, preco_produto, novo_preco);
    }

    system("pause");
    return 0;
}