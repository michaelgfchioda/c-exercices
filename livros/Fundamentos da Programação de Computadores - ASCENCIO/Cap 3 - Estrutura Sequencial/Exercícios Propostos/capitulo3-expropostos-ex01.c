// 1. Faça um programa que receba dois números, calcule e mostre a subtração do primeiro número pelo segundo. 

#include <stdio.h>
#include <stdlib.h>

int main() {

    // declaração de variáveis
    int num1, num2, subtracao;
                // subtracao é uma variável opcional, poderia ser feito o cálculo 
                // direto na impressão do resultado sem a necessidade de uma variável

    printf("\nOla! Digite dois numeros inteiros para calcularmos a subtracao!\n");
    printf("\nPrimeiro numero: ");
    scanf("%i", &num1);
    printf("Segundo numero: ");
    scanf("%i", &num2);

    subtracao = num1 - num2;

    printf("\nA subtracao do numero '%i' pelo numero '%i' eh igual a '%i'\n", num1, num2, subtracao /* num1 - num2; */);
    printf("\nExpressao:");
    printf("\n%i - %i = %i\n\n", num1, num2, subtracao);

    system("pause");
    return 0;
}
