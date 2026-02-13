/* 19.  Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, 
utilizando as seguintes fórmulas (onde h é a altura):

    ■ Para homens: (72.7 * h) – 58.
    ■ Para mulheres: (62.1 * h) – 44.7.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    float altura, peso_ideal;
    char sexo;

    printf("\n\tOla! Digite os dados abaixo para calcularmos seu peso ideal.\n");
    printf("\n\tAltura (em metros): ");
    scanf("%f", &altura);
    printf("\n\tDigite:\n\n\tM/m - masculino\n\tF/f - feminino\n");
    printf("\n\tSexo: ");
    scanf(" %c", &sexo); // O espaço antes de %c é para consumir qualquer caractere de nova linha deixado no buffer

    if (sexo == 'M' || sexo == 'm') {
        peso_ideal = (72.7 * altura) - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        peso_ideal = (62.1 * altura) - 44.7;
    } else {
        printf("\n\tSexo invalido... Tente novamente.\n\n");
        system("pause");
        return 0;
    }

    printf("\n\tTendo %.2f m de altura e sendo do sexo %c, seu peso ideal eh de %.2f kg.\n\n", altura, sexo, peso_ideal);

    system("pause");
    return 0;
}