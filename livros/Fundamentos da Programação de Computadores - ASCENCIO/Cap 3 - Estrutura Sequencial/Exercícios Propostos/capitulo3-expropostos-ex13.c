/* 13. Faça um programa que calcule e mostre a tabuada de um número digitado pelo usuário. 
Exemplo:
Digite um número: 5
5 × 0 = 0
5 × 1 = 5
5 × 2 = 10
5 × 3 = 15
5 × 4 = 20
5 × 5 = 25
5 × 6 = 30
5 × 7 = 35
5 × 8 = 40
5 × 9 = 45
5 × 10 = 50
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int numero;

    printf("\nOla! Digite um numero para visualizar sua tabuada: ");
    scanf("%i", &numero);

    printf("\nTabuada do %i:\n", numero);
    printf("--------------------\n");
    printf("%i  x  0 = %i\n", numero, numero * 0);
    printf("%i  x  1 = %i\n", numero, numero * 1);
    printf("%i  x  2 = %i\n", numero, numero * 2);
    printf("%i  x  3 = %i\n", numero, numero * 3);
    printf("%i  x  4 = %i\n", numero, numero * 4);
    printf("%i  x  5 = %i\n", numero, numero * 5);
    printf("%i  x  6 = %i\n", numero, numero * 6);
    printf("%i  x  7 = %i\n", numero, numero * 7);
    printf("%i  x  8 = %i\n", numero, numero * 8);
    printf("%i  x  9 = %i\n", numero, numero * 9);
    printf("%i  x 10 = %i\n", numero, numero * 10);
    printf("--------------------\n");

    system("pause");
    return 0;
}