// 19. Sabe-se que, para iluminar de maneira correta os cômodos de uma casa, para cada m², deve-se usar 18 Watts de potência. 
// Faça um programa que receba as duas dimensões de um cômodo (em metros), 
// calcule e mostre a sua área (em m²) e a potência de iluminação que deverá ser utilizada. 

#include <stdio.h>
#include <stdlib.h>

int main() {

    float altura, largura, area, potencia;

    printf("\nOla! Digite as medidas (em metro) necessarias abaixo!\n");
    printf("\nAltura do comodo: ");
    scanf("%f", &altura);
    printf("\nLargura do comodo: ");
    scanf("%f", &largura);

    area = largura * altura;
    potencia = area * 18.0;

    printf("\nVisto que a area do comodo eh de %.2f m2, sera preciso, aproximadamente, %.1f W de potencia para iluminar completamente!\n\n", area, potencia);

    system("pause");
    return 0;
}
