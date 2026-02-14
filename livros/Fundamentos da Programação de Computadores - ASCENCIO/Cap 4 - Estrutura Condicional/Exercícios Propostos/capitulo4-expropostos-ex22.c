/* 22. Faça um programa que receba a idade e o peso de uma pessoa. De acordo com a tabela a seguir, verifique 
e mostre em qual grupo de risco essa pessoa se encaixa.

                    |                        PESO
    IDADE           |    Até 60      Entre 60 e 90 (inclusive)       Acima de 90
Menores que 20      |       9                    8                        7
De 20 a 50          |       6                    5                        4
Maiores que 50      |       3                    2                        1
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int idade;
    float peso;

    printf("\n\tOla! Digite sua idade e seu peso (Kg) abaixo para verificarmos\n\tem qual grupo de risco voce se encaixa.\n");
    printf("\n\tIdade: ");
    scanf("%i", &idade);
    printf("\n\tPeso: ");
    scanf("%f", &peso);

    if (idade < 20) {
        if (peso < 60)
            printf("\n\tVoce se encaixa no grupo de risco Num 9.\n\n");
        else if (peso >= 60 && peso <= 90)
            printf("\n\tVoce se encaixa no grupo de risco Num 8.\n\n");
        else
            printf("\n\tVoce se encaixa no grupo de risco Num 7.\n\n");
    } else if (idade >= 20 && idade <= 50) {
        if (peso < 60)
            printf("\n\tVoce se encaixa no grupo de risco Num 6.\n\n");
        else if (peso >= 60 && peso <= 90)
            printf("\n\tVoce se encaixa no grupo de risco Num 5.\n\n");
        else
            printf("\n\tVoce se encaixa no grupo de risco Num 4.\n\n");
    } else {
        if (peso < 60)
            printf("\n\tVoce se encaixa no grupo de risco Num 3.\n\n");
        else if (peso >= 60 && peso <= 90)
            printf("\n\tVoce se encaixa no grupo de risco Num 2.\n\n");
        else
            printf("\n\tVoce se encaixa no grupo de risco Num 1.\n\n");
    }

    system("pause");
    return 0;
}