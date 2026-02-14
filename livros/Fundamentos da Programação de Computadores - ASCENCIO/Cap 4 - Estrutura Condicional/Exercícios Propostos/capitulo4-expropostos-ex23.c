/* 23. Faça um programa que receba: 
    ■ o código do produto comprado; e
    ■ a quantidade comprada do produto.
calcule e mostre: 
    ■ o preço unitário do produto comprado, seguindo a Tabela I; 
    ■ o preço total da nota; 
    ■ o valor do desconto, seguindo a Tabela II e aplicado sobre o preço total da nota; e
    ■ o preço final da nota depois do desconto.

     TABELA I                                       TABELA II
CóDIgo      PREço               PREÇO TOTAL DA NOTA             % DE DESCONTO
1 a 10     R$ 10,00                Até R$ 250,00                     5%
11 a 20    R$ 15,00         Entre R$ 250,00 e R$ 500,00             10%
21 a 30    R$ 20,00              Acima de R$ 500,00                 15%
31 a 40    R$ 30,00
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int codigo_produto, quantidade; // Comprado
    float preco_unitario, preco_total_nota, percentual_desconto, preco_final_nota;

    printf("\n\tOla! Digite o codigo do produto e sua quantidade comprada.\n\n");
    printf("\n\tCodigo do produto: ");
    scanf("%i", &codigo_produto);
    printf("\n\tQuantidade comprada: ");
    scanf("%i", &quantidade);

    if (codigo_produto >= 1 && codigo_produto <= 10) {
       preco_unitario = 10.00;
    } else if (codigo_produto >= 11 && codigo_produto <= 20) {
        preco_unitario = 15.00;
    } else if (codigo_produto >= 21 && codigo_produto <= 30) {
        preco_unitario = 20.00;
    } else if (codigo_produto >= 31 && codigo_produto <= 40) {
        preco_unitario = 30.00;
    } else {
        percentual_desconto = 0.00;
        preco_final_nota = preco_total_nota;
        
        printf("\n\tCodigo do produto invalido.\n\n");

        return 0;
    }

    preco_total_nota = preco_unitario * quantidade;

    if (preco_total_nota <= 250.00) {
        percentual_desconto = 0.05;
    } else if (preco_total_nota <= 500.00) {
        percentual_desconto = 0.10;
    } else {
        percentual_desconto = 0.15;
    }

    preco_final_nota = preco_total_nota - (preco_total_nota * percentual_desconto);

        printf("\n\tComprando %i produtos com o codigo %i e valor de R$%.2f, seu percentual de desconto sera de %.0f%%,\n\te voce deve pagar R$%.2f.\n\n", quantidade, codigo_produto, preco_unitario, percentual_desconto * 100, preco_final_nota);
    
        system("pause");
        return 0;
    }