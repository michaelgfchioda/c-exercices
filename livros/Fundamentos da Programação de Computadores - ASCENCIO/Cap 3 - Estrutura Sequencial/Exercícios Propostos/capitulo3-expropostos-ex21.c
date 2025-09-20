/*
    21. Faça um programa que receba o número de horas trabalhadas, 
        o valor do salário mínimo e o número de horas extras trabalhadas, 
        calcule e mostre o salário a receber, de acordo com as regras a seguir: 
        a) a hora trabalhada vale 1/8 do salário mínimo; 
        b) a hora extra vale 1/4 do salário mínimo; 
        c) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada; 
        d) a quantia a receber pelas horas extras equivale ao número de horas extras trabalhadas multiplicado pelo valor da hora extra; 
        e) o salário a receber equivale ao salário bruto mais a quantia a receber pelas horas extras.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    float num_hora_trab, salario_min, num_hora_extra_trab, receber_hora_extra, receber_salario;
    float valor_hora, valor_hora_extra, salario_bruto;

    printf("\nOla! Digite algumas informacoes abaixo!\n");
    printf("\nNumero de horas trabalhadas: ");
    scanf("%f", &num_hora_trab);
    printf("\nValor do salario minimo: R$");
    scanf("%f", &salario_min);
    printf("\nNumero de horas extras trabalhadas: ");
    scanf("%f", &num_hora_extra_trab);

    valor_hora = salario_min / 8; //        poderia ser (* 0.125)
    valor_hora_extra = salario_min / 4; //  poderia ser (* 0.25)
    salario_bruto = num_hora_trab * valor_hora;
    receber_hora_extra = num_hora_extra_trab * valor_hora_extra;
    receber_salario = salario_bruto + receber_hora_extra;

    printf("\nVoce trabalhou por %.2f horas, ganhando %.2f por hora, obtendo um salario bruto de R$%.2f", num_hora_trab, valor_hora, salario_bruto);
    printf("\nVoce trabalhou por %.2f horas extras, ganhando %.2f por hora extra, obtendo um total de R$%.2f extras", num_hora_extra_trab, valor_hora_extra, receber_hora_extra);
    printf("\nSomando seu salario bruto de R$%.2f com R$%.2f das horas extras, seu salario final sera de R$%.2f\n\n", salario_bruto, receber_hora_extra, receber_salario);

    //system("pause");
    getchar();
    return 0;
}