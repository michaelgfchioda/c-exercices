/* 8. Faça um programa para calcular e mostrar o salário reajustado de um funcionário. 
O percentual de aumento encontra-se na tabela a seguir:

SALÁRIO          PERCENTUAL DE AUMENTO
Até R$ 300,00             35%
Acima de R$ 300,00        15%

*/

int main() {

    float salario, salario_reajustado;

    printf("\n\tOla! Digite o valor do seu salario: R$");
    scanf("%f", &salario);

    if (salario <= 300.00) {
        salario_reajustado = salario + (salario * 0.35);
        printf("\nSeu salario reajustado com 35%% de aumento eh: R$%.2f\n\n", salario_reajustado);
    } else {
        salario_reajustado = salario + (salario * 0.15);
        printf("\nSeu salario reajustado com 15%% de aumento eh: R$%.2f\n\n", salario_reajustado);
    }

    system("pause");
    return 0;
}