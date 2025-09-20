/* 24. Faça um programa que receba a quantidade de dinheiro em reais que uma pessoa que vai viajar possui. 
        Ela vai passar por vários países e precisa converter seu dinheiro em dólares, marco alemão e libra esterlina. 
        Sabe-se que a cotação do dólar é de R$ 1,80; do marco alemão, de R$ 2,00; e da libra esterlina, de R$ 3,57. 
        O programa deve fazer as conversões e mostrá-las.*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    float valor_reais, valor_dolar, valor_alemao, valor_esterlina;

    printf("\nOla! Digite o valor que voce tem em reais para fazermos as conversoes necessarias!\n");
    printf("\nValor em reais: R$");
    scanf("%f", &valor_reais);

    printf("\nConvertendo...\n");
    
    valor_dolar = valor_reais / 1.80;
    valor_alemao = valor_reais / 2.00;
    valor_esterlina = valor_reais / 3.57;

    printf("\n\tCom R$%.2f, voce obtera os seguintes valores:", valor_reais);
    printf("\n- Em dolar: USD%.2f", valor_dolar);
    printf("\n- Em marco alemao: DM%.2f", valor_alemao);
    printf("\n- Em esterlina: %.2f\n\n", valor_esterlina);
    //                      £ -> símbolo da libra esterlina, ele não consegue imprimir

    system("pause");
    return 0;
}