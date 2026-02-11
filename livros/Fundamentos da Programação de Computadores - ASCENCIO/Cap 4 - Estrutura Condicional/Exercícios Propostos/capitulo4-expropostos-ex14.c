/* 14. Faça um programa que receba o salário de um funcionário e, usando a tabela a seguir, 
    calcule e mostre o novo salário.

    FAIxA SALARIAL          % DE AuMENTo
Até R$ 300,00                   50%
R$ 300,00  R$ 500,00            40%
R$ 500,00  R$ 700,00            30%
R$ 700,00  R$ 800,00            20%
R$ 800,00  R$ 1.000,00          10%
Acima de R$ 1.000,00             5%
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    float salario, perc_aumento, novo_salario;

    printf("\n\tOla! Digite o seu salario");
    printf("\n\tR$");
    scanf("%f", &salario);

    if (salario <= 300.00) {
        perc_aumento = 0.50;
        novo_salario = salario + (salario * perc_aumento);
    } else if (salario > 300.00 && salario <= 500.00) {
        perc_aumento = 0.40;
        novo_salario = salario + (salario * perc_aumento);
    } else if (salario > 500.00 && salario <= 700.00) {
        perc_aumento = 0.30;
        novo_salario = salario + (salario * perc_aumento);
    } else if (salario > 700.00 && salario <= 800.00) {
        perc_aumento = 0.20;
        novo_salario = salario + (salario * perc_aumento);
    } else if (salario > 800.00 && salario <= 1000.00) {
        perc_aumento = 0.10;
        novo_salario = salario + (salario * perc_aumento);
    } else {
        perc_aumento = 0.05;
        novo_salario = salario + (salario * perc_aumento);
    }
                                                                                                // O valor de perc_aumento é multiplicado por 100 para ser exibido em porcentagem
    printf("\n\tCom o salario de R$%.2f, voce recebera um aumento de %.0f%%, e o seu novo salario sera de R$%.2f\n\n", salario, perc_aumento * 100, novo_salario);

    system("pause");
    return 0;
}