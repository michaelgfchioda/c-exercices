// 6. Um  funcionário  recebe  um  salário  fixo  mais  4%  de  comissão  sobre  as  vendas.  Faça  um  programa  
// que receba o salário fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e seu salário final. 

#include <stdio.h>
#include <stdlib.h>

int main() {

    float salario_func, valor_vendas, comissao, salario_final;
    
    printf("\nOla, funcionario! Digite seu salario fixo e o valor total de suas vendas para calcularmos o valor de comissao e seu salario final!\n");
    printf("\nSalario fixo: R$");
    scanf("%f", &salario_func);
    printf("Valor total das vendas: R$");
    scanf("%f", &valor_vendas);

    comissao = valor_vendas * 0.04;
    salario_final = salario_func + comissao;

    printf("\nCalculando...");
    printf("\nCom o valor total de vendas de R$%.2f, sua comissao sera de R$%.2f\n", valor_vendas, comissao);
    printf("Seu salario final, com a comissao, sera de R$%.2f\n\n", salario_final);
    
    system("pause");
    return 0;
}