// 9. Faça um programa que calcule e mostre a área de um trapézio. 
//      Sabe-se que: A = ((base maior + base menor) * altura)/2

#include <stdio.h>
#include <stdlib.h>

int main() {

    float area_trapezio, base_maior, base_menor, altura;

    printf("\nOla! Digite os valores necessarios para calcularmos a area de um trapezio!\n");
    printf("\nValor da base maior: ");
    scanf("%f", &base_maior);
    printf("\nValor da base menor: ");
    scanf("%f", &base_menor);
    printf("\nValor da altura: ");
    scanf("%f", &altura);

    area_trapezio = ((base_maior + base_menor) * altura) / 2;

    printf("\nA area do trapezio corresponde a: %.2f m^2\n\n", area_trapezio);

    system("pause");
    return 0;
}