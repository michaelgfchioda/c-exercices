// 23. Faça um programa que receba a medida de dois ângulos de um triângulo, 
//     calcule e mostre a medida do terceiro ângulo. 
//     sabe-se que a soma dos ângulos de um triângulo é 180 graus.

#include <stdio.h>
#include <stdlib.h>

int main() {

    float angulo1, angulo2, angulo3;

    printf("\nOla! Digite a medida de dois angulos para calcularmos o terceiro!\n");
    printf("\nPrimeiro angulo: ");
    scanf("%f", &angulo1);
    printf("\nSegundo angulo: ");
    scanf("%f", &angulo2);

    angulo3 = angulo1 + angulo2;

    printf("\nA soma dos tres angulos precisa ser 180 graus!");
    printf("\nA medida do terceiro angulo eh %.0f, completando %.0f graus!\n\n", angulo3, angulo1 + angulo2 + angulo3);

    system("pause");
    return 0;
}