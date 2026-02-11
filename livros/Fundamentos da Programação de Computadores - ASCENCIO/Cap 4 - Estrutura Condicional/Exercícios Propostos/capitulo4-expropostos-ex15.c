/* 15. Uma  agência  bancária  possui  dois  tipos  de  investimentos,  conforme  o  quadro  a  seguir.  
    Faça  um  programa que receba o tipo de investimento e seu valor, calcule e mostre o valor corrigido 
    após um mês de investimento, de acordo com o tipo de investimento.

    TIPo DESCRIção           RENDIMENTo MENSAL
      1 Poupança                    3%
      2 Fundos de renda fixa        4%
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int tipo_investimento;
    float valor_investimento, valor_corrigido;

    printf("\n\tOla! Bem-vindo ao programa de investimentos do banco.\n");
    printf("\n\tEscolha o tipo de investimento:\n");
    printf("\t\t1 - Poupanca\n\t\t2 - Fundos de renda fixa\n");
    printf("\n\tDigite o numero correspondente ao tipo de investimento: ");
    scanf("%i",&tipo_investimento);

    if (tipo_investimento != 1 && tipo_investimento != 2) {
        printf("\n\tOpcao invalida... Tente novamente.\n\n");
        system("pause");
        return 0;
    }

    if (tipo_investimento == 1) {
        printf("\n\tTipo escolhido: Poupanca\n");
    } else {
        printf("\n\tTipo escolhido: Fundos de renda fixa\n");
    }

    printf("\n\tDigite o valor do investimento:");
    printf("\n\tR$");
    scanf("%f", &valor_investimento);

    switch (tipo_investimento) {
        case 1:
            valor_corrigido = valor_investimento + (valor_investimento * 0.03);
            printf("\n\tApos um mes, o valor corrigido do seu investimento em Poupanca sera: R$%.2f\n\n", valor_corrigido);
            break;
        case 2:
            valor_corrigido = valor_investimento + (valor_investimento * 0.04);
            printf("\n\tApos um mes, o valor corrigido do seu investimento em Fundos de renda fixa sera: R$%.2f\n\n", valor_corrigido);
            break;
        default:
            return 0;
            break;
    }

    system("pause");
    return 0;
}