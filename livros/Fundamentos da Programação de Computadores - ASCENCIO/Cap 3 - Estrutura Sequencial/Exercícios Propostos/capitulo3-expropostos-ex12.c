// 12. Faça um programa que receba o valor do salário mínimo e o valor do salário de um funcionário, 
// calcule e mostre a quantidade de salários mínimos que esse funcionário ganha.

#include <stdio.h>
#include <stdlib.h>

int main() {

    float salario_min, salario_func, qtd_salarios_min;

    printf("\nOla! Digite o valor do salario minimo: R$");
    scanf("%f", &salario_min);
    printf("\nAgora, digite o valor do seu salario: R$");
    scanf("%f", &salario_func);

    qtd_salarios_min = salario_func / salario_min;

    printf("\nVoce ganha aproximadamente %.2f salarios minimos!\n\n", qtd_salarios_min);

    system("pause");
    return 0;
}