// 10. Faça um programa que calcule e mostre a área de um quadrado. 
//      Sabe-se que: A = lado * lado

#include <stdio.h>
#include <stdlib.h>

int main() {

    float area_quadrado, lado_quadrado;

    printf("\nOla! Digite o valor do lado do quadrado: ");
    scanf("%f", &lado_quadrado);

    area_quadrado = lado_quadrado * lado_quadrado;

    printf("\nA area do quadrado com os lados iguais a %.2fm corresponde a: %.2fm^2\n\n", lado_quadrado, area_quadrado);

    system("pause");
    return 0;
}