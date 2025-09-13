// 8. Faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas.

#include <stdio.h>
#include <stdlib.h>

int main() {

    float peso, peso_gramas;

    printf("\nOla! Digite seu peso em quilos: ");
    scanf("%f", &peso);

    peso_gramas = peso * 1000;

    printf("\nSeu peso convertido em gramas eh: %.2fg\n\n", peso_gramas);

    system("pause");
    return 0;
}