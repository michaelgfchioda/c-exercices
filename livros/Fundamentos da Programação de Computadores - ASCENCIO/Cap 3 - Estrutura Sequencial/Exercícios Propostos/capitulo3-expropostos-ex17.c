/* Faça um programa que receba o raio, calcule e mostre: 
    a) o comprimento de uma esfera; sabe-se que c = 2 * pi R; 
    b) a área de uma esfera; sabe-se que A = 4 * pi R2; 
    c) o volume de uma esfera; sabe-se que v = 4/3 * pi R3.
*/

#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES // Permite que a contante pi da biblioteca possa ser utilizada 
#include <math.h>

int main() {

    float raio, comprimento_esfera, area_esfera, volume_esfera;

    printf("\nOla! De um valor ao raio!\n");
    printf("\nRaio: ");
    scanf("%f", &raio);

    comprimento_esfera = 2 * M_PI * raio;
    area_esfera = 4 * M_PI * pow(raio, 2);
    volume_esfera = (4.0/3.0) * M_PI * pow(raio, 3);

    printf("\nO comprimento da esfera eh igual a %.2f\n", comprimento_esfera);
    printf("\nA area da esfera eh igual a %.2f\n", area_esfera);
    printf("\nO volume da esfera eh igual a %.2f\n\n", volume_esfera);

    system("pause");
    return 0;
}