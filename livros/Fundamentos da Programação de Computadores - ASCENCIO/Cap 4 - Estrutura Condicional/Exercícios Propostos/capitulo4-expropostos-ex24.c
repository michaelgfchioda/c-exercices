/* 24.  Faça um programa que receba o preço, a categoria (1 — limpeza; 2 — alimentação; ou 3 — vestuário) 
e a situação (R — produtos que necessitam de refrigeração; e N — produtos que não necessitam de refrigeração).

Calcule e mostre:
■ O valor do aumento, usando as regras que se seguem.
  PREço  |   CATEgoRIA       PERCENTuAL DE AuMENTo
         |       1                    5%
 < = 25  |       2                    8%
_________|       3                   10%
         |       1                   12%
   > 25  |       2                   15%
_________|       3                   18%

■ O valor do imposto, usando as regras a seguir.

O produto que preencher pelo menos um dos seguintes requisitos pagará imposto equivalente a 5% 
do preço; caso contrário, pagará 8%. Os requisitos são:

    Categoria: 2
    Situação: R

■ O novo preço, ou seja, o preço mais aumento menos imposto. 
■ A classificação, usando as regras a seguir.

        NoVo PREço                      CLASSIFICAção
       < = R$ 50,00                         Barato
  Entre R$ 50,00 e R$ 120,00                Normal
       > = R$ 120,00                        Caro
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    float preco, valor_aumento, percentual_aumento, valor_imposto, novo_preco, preco_com_aumento;
    int categoria;
    char situacao;

    printf("\n\tOla! Digite abaixo o preco, categoria e a sitaucao do produto.\n");
    printf("\n\tPreco: R$");
    scanf("%f", &preco);

    printf("\t_________________");
    printf("\n\t|___CATEGORIA___|");
    printf("\n\t|_______1_______|");
    printf("\n\t|_______2_______|");
    printf("\n\t|_______3_______|\n");

    printf("\n\tCategoria: ");
    scanf("%i", &categoria);

    printf("\t__________________________________________________________________");
    printf("\n\t|___________________________SITUACAO_____________________________|");
    printf("\n\t|_______R (produtos que necessitam de refrigeracao)____________|");
    printf("\n\t|_______N (produtos que nao necessitam de refrigeracao)________|\n");

    printf("\n\tSituacao: ");
    scanf(" %c", &situacao);

    // Cálculo do percentual de aumento de acordo com o preço
    if (preco <= 25) {
        if (categoria == 3) {
            percentual_aumento = 0.10;
        } else if (categoria == 2) {
            percentual_aumento = 0.08;
        } else if (categoria == 1) {
            percentual_aumento = 0.05;
        } else {
            percentual_aumento = 0.00;
        }
    } else {
        if (categoria == 3) {
            percentual_aumento = 0.18;
        } else if (categoria == 2) {
            percentual_aumento = 0.15;
        } else if (categoria == 1) {
            percentual_aumento = 0.12;
        } else {
            percentual_aumento = 0.00;
        }
    }

    // Cálculo do valor do aumento (apenas a quantia em R$)
    if (percentual_aumento == 0.00)
        valor_aumento = preco + percentual_aumento;
    else
        valor_aumento = preco * percentual_aumento;
    
    // Preço intermediário com o aumento
    preco_com_aumento = preco + valor_aumento;

    // Cálculo do valor do imposto.
    // A regra é "pelo menos um", então usa-se OU (||). O imposto é sobre o "preço" original.
    // Quem cumpre o requisito paga 5%, caso contrário paga 8%.
    if (categoria == 2 || situacao == 'R' || situacao == 'r') {
        valor_imposto = preco * 0.05;
    } else {
        valor_imposto = preco * 0.08;
    }

    // Cálculo do novo_preco
    novo_preco = preco_com_aumento - valor_imposto;

    printf("\n\tO produto de valor R$%.2f, com categoria %i e situacao %c,\n\trecebera um aumento de %.0f%% (R$%.2f), ficando com R$%.2f.\n\tPagara R$%.2f de imposto, e ficara com o novo preco de R$%.2f.\n", preco, categoria, situacao, percentual_aumento * 100, valor_aumento, preco_com_aumento, valor_imposto, novo_preco);

    // Classificação do novo_preco
    if (novo_preco <= 50.00) {
        printf("\n\tClassificacao do produto: Barato.\n\n");
    } else if (novo_preco > 50.00 && novo_preco < 120.00) {
        printf("\n\tClassificacao do produto: Normal.\n\n");
    } else {
        printf("\n\tClassificacao do produto: Caro.\n\n");
    }

    system("pause");
    return 0;
}