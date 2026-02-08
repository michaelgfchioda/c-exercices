/* 7. Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$ 500,00. 
Faça um programa que receba o salário do funcionário e mostre o valor do salário reajustado ou uma mensagem, 
caso ele não tenha direito ao aumento.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    float salario, novo_salario;

    printf("\nOla, funcionario! Digite seu salario para verificarmos se voce tem direito a um aumento!\n");
    printf("\nSalario: R$");
    scanf("%f", &salario);

    if (salario < 500.00) {
        novo_salario = salario + (salario * 0.30);
        printf("\nSeu salario subiu de %.2f para %.2f!\n\n", salario, novo_salario);
    } else {
        printf("\nCom salario de %.2f, voce nao tem direito a aumento...\n\n", salario);
    }

    system("pause");
    return 0;
}