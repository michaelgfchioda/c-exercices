// 2. Faça um programa que receba três números, calcule e mostre a multiplicação desses números.

#include <stdio.h>
#include <stdlib.h>

int main() {

    float num1, num2, num3, resultado;

    printf("\nOla! Digite tres numeros para calcularmos a multiplicacao!\n");
    printf("\nDigite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Segundo numero: ");
    scanf("%f", &num2);
    printf("Terceiro numero: ");
    scanf("%f", &num3);

    printf("\nO resultado da multiplicacao entre %.2f, %.2f e %.2f eh: %.2f\n", num1, num2, num3, (num1*num2*num3));
    printf("\nExpressao:\n");
    printf("%.2f . %.2f . %.2f = %.2f\n\n", num1, num2, num3, (num1*num2*num3));

    system("pause");
    return 0;
}