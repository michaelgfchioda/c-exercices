// 16. Faça um programa que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    float cateto1, cateto2, soma, hipotenuza;

    printf("\nOla! Digite os valores dos catetos para encotrarmos a hipotenuza do triangulo!\n");
    printf("\nCateto1: ");
    scanf("%f", &cateto1);
    printf("\nCateto2: ");
    scanf("%f", &cateto2);

    soma = pow(cateto1, 2) + pow(cateto2, 2);
    hipotenuza = sqrt(soma);

    printf("\nA soma dos catetos ao quadrado eh %.2f", soma);
    printf("\nLogo, a hipotenuza eh %.3f\n\n", hipotenuza);

    system("pause");
    return 0;
}