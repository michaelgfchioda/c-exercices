/* 3. Faça  um  programa  que  receba  dois  números,  calcule  e  mostre  a  divisão  do  primeiro  número  pelo segundo. 
Sabe-se que o segundo número não pode ser zero, portanto, não é necessário se preocupar com validações.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    float num1, num2, divisao;

    printf("\nOla! Digite dois numeros para calcularmos a divisao do primeiro pelo segundo!\n");
    printf("\nPrimeiro numero: ");
    scanf("%f", &num1);
    printf("Segundo numero: ");
    scanf("%f", &num2);

    divisao = num1 / num2;

    printf("\nO resultado da divisao eh:\n");
    printf("%.2f / %.2f = %.2f\n\n", num1, num2, divisao);

    system("pause");
    return 0;
}