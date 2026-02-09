/* 11. Faça um programa que receba o salário atual de um funcionário e, usando a tabela a seguir, calcule e 
    mostre o valor do aumento e o novo salário.

    SALáRIo             PERCENTuAL DE AuMENTo
Até R$ 300,00                   15% 
R$ 300,00  R$ 600,00            10% 
R$ 600,00  R$ 900,00            5% 
Acima de R$ 900,00              0%
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    float salario, porcentagem=0, val_aumento, novo_salario;

    printf("\n\tOla! Digite o seu salario atual: R$");
    scanf("%f", &salario);

    if (salario <= 300) {
        porcentagem = 0.15;
        val_aumento = salario * porcentagem;
        novo_salario = salario + val_aumento;
    } else if (salario > 300 && salario <= 600) {
        porcentagem = 0.10;
        val_aumento = salario * porcentagem;
        novo_salario = salario + val_aumento;
    } else if (salario > 600 && salario <= 900) {
        porcentagem = 0.05;
        val_aumento = salario * porcentagem;
        novo_salario = salario + val_aumento;
    } else {
        porcentagem = 0;
        val_aumento = 0;
        novo_salario = salario + val_aumento;
    }

    printf("\n\tPor receber R$%.2f de salario, seu aumento sera de R$%.2f%% e seu novo salario sera de R$%.2f\n\n", salario, porcentagem, novo_salario);
    
    system("pause");
    return 0;
}