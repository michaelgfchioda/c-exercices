/* 12. Faça um programa que receba o salário bruto de um funcionário e, usando a tabela a seguir, 
    calcule e mostre o valor a receber. Sabe-se que este é composto pelo salário bruto acrescido de gratificação 
    e descontado o imposto de 7% sobre o salário.

        TABELA DAS gRATIFICAçõES
    SALáRIo                 GRATIFICAção
Até R$ 350,00                R$ 100,00
R$ 350,00  R$ 600,00         R$ 75,00
R$ 600,00  R$ 900,00         R$ 50,00
Acima de R$ 900,00           R$ 35,00
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    float salario_bruto, salario_liquido, gratificacao, imposto;

    printf("\n\tOla! Digite o valor do seu salario bruto: R$");
    scanf("%f", &salario_bruto);

    if (salario_bruto <= 350.00) {
        gratificacao = 100.00;
        imposto = (salario_bruto + gratificacao) * 0.07;
        salario_liquido = (salario_bruto + gratificacao) - imposto;
    } else if (salario_bruto > 350.00 && salario_bruto <= 600.00) {
        gratificacao = 75.00;
        imposto = (salario_bruto + gratificacao) * 0.07;
        salario_liquido = (salario_bruto + gratificacao) - imposto;
    } else if (salario_bruto > 600.00 && salario_bruto <= 900.00) {
        gratificacao = 50.00;
        imposto = (salario_bruto + gratificacao) * 0.07;
        salario_liquido = (salario_bruto + gratificacao) - imposto;
    } else {
        gratificacao = 35.00;
        imposto = (salario_bruto + gratificacao) * 0.07;
        salario_liquido = (salario_bruto + gratificacao) - imposto;
    }

    printf("\n\tCom o salario bruto de R$%.2f, voce recebera R$%.2f de gratificacao, \n\tpagara R$%.2f de imposto, e seu salario liquido sera de R$%.2f\n\n.", salario_bruto, gratificacao, imposto, salario_liquido);

    system("pause");
    return 0;
}