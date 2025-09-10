// Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas, 
// considerando peso 2 para a primeira e peso 3 para a segunda.

#include <stdio.h>
#include <stdlib.h>

int main() {

    float nota1, nota2, media_ponderada;

    printf("\nOla! Digite suas notas para calcularmos a media ponderada!\n");
    printf("\nPrimeira nota: ");
    scanf("%f", &nota1);
    printf("Segunda nota: ");
    scanf("%f", &nota2);

    media_ponderada = ((nota1 * 2) + (nota2 * 3)) / 5;

    printf("\nA media ponderada eh igual a: %.2f\n\n", media_ponderada);

    system("pause");
    return 0;
}