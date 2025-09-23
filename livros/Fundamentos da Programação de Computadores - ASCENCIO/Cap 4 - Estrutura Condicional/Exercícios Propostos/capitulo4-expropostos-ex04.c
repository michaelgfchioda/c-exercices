// 4. Faça um programa que receba três números e mostre o maior

#include <stdio.h>
#include <stdlib.h>

int main() {

    float num1, num2, num3;

    printf("\nOla! Digite tres numeros para compararmos seus tamanhos!\n");
    printf("\nPrimeiro numero: ");
    scanf("%f", &num1);
    printf("\nSegundo numero: ");
    scanf("%f", &num2);
    printf("\nTerceiro numero: ");
    scanf("%f", &num3);

    if (num1 > num2 && num1 > num3) {
        printf("\nO maior numero digitado foi: %.2f\n\n", num1);
    }
    if (num2 > num1 && num2 > num3) {
        printf("\nO maior numero digitado foi: %.2f\n\n", num2);
    }
    if (num3 > num1 && num3 > num2) {
        printf("\nO maior numero digitado foi: %.2f\n\n", num3);
    }

    system("pause");
    return 0;
}