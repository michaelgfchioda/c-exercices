// 11. Faça um programa que calcule e mostre a área de um losango. 
//      Sabe-se que: A = (diagonal maior * diagonal menor)/2.

#include <stdio.h>
#include <stdlib.h>

int main() {

    float area_losango, diagonal_menor, diagonal_maior;

    printf("\nOla! Digite os valores das diagonais de um losango para calcularmos sua area!\n");
    printf("\nDiagonal maior: ");
    scanf("%f", &diagonal_maior);
    printf("\nDiagonal menor: ");
    scanf("%f", &diagonal_menor);

    area_losango = (diagonal_maior * diagonal_menor) / 2;

    printf("\nA area do losango eh de %.2fm^2!\n\n", area_losango);

    system("pause");
    return 0;
}