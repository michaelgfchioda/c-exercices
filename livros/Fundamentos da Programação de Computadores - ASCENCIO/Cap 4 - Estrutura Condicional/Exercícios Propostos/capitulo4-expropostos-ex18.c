/* 18. Faça um programa que receba a idade de uma pessoa e mostre a mensagem de maioridade ou não. */

#include <stdio.h>
#include <stdlib.h>

int main() {

    int idade;

    printf("\n\tOla! Digite a sua idade: ");
    scanf("%i", &idade);

    if (idade < 18) {
        printf("\n\tVoce eh menor de idade.\n\n");
    } else {
        printf("\n\tVoce eh maior de idade.\n\n");
    }

    system("pause");
    return 0;
}