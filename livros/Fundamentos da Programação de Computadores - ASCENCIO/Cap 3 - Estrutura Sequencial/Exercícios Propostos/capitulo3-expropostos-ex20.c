// 20. Faça um programa que receba a medida do ângulo formado por uma escada apoiada no chão e a distância 
// em que a escada está da parede, calcule e mostre a medida da escada para que se possa alcançar sua ponta.

#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main() {

    float angulo, distancia, medida, angulo_rad;

    printf("\nOla! Digite o valor do angulo formado pela escada apoiada no chao: ");
    scanf("%f", &angulo);
    printf("\nAgora, sua distancia em relacao a parede: ");
    scanf("%f", &distancia);

    angulo_rad = angulo * M_PI / 180;

    printf("\nComo a escada esta apoiada na parede, ela formara um triangulo retangulo.");
    printf("\nSe ela esta apoiada na parede, a parede eh o cateto oposto ao angulo.");
    printf("\nComo queremos a distancia, o que interessa eh o cateto adjacente.");
    printf("\nSe temos o valor do angulo (%.2f) e o valor da distancia (%.2f), temos como tirar o Cosseno para encontrarmos a hipotenuza.", angulo, distancia);
    printf("\nA hipotenuza trata-se da medida da escada, entao:\n");

    medida = distancia / cos(angulo_rad);

    printf("\nA medida da escada eh de %.2fu.c\n\n", medida);

    system("pause");
    return 0;
}