// 3. Faça um programa que receba dois números e mostre o menor.

#include <stdio.h>
#include <stdlib.h>

int main() {

    float num1, num2;

    printf("\nOla! Digite dois numeros para compararmos seus tamanhos!\n");
    printf("\nPrimeiro numero: ");
    scanf("%f", &num1);
    printf("\nSegundo numero: ");
    scanf("%f", &num2);

    if (num1 > num2) {
        printf("\nO menor numero digitado foi: %.2f\n\n", num2);
    } else {
        printf("\nO menor numero digitado foi: %.2f\n\n", num1);
    }

    system("pause");
    return 0;
}