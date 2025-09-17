/* 15. João recebeu seu salário e precisa pagar duas contas atrasadas. Em razão do atraso, ele deverá pagar 
   multa de 2% sobre cada conta. Faça um programa que calcule e mostre quanto restará do salário de João.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    float salario, conta1, conta2, multa1, multa2, total_contas, salario_final;

    printf("\nOla! Digite o valor do seu salario: R$");
    scanf("%f", &salario);
    printf("\nDigite o valor da primeira conta atrasada: R$");
    scanf("%f", &conta1);
    printf("\nDigite o valor da segunda conta atrasada: R$");
    scanf("%f", &conta2);

    multa1 = conta1 *0.02;
    multa2 = conta2 * 0.02;
    total_contas = conta1 + multa1 + conta2 + multa2;

    salario_final = salario - total_contas;

    printf("\nO valor total das suas contas atrasadas sem a multa: R$%.2f", conta1 + conta2);
    printf("\nO valor total das multas: R$%.2f", multa1 + multa2);
    printf("\nO valor total das suas contas atrasadas com o valor da multa: R$%.2f", total_contas);
    printf("\nO valor que sobrara do seu salario apos o pagamento das contas atrasadas: R$%.2f\n\n", salario_final);

    system("pause");
    return 0;
}