/* 14. Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre: 
        a) a idade dessa pessoa em anos; 
        b) a idade dessa pessoa em meses; 
        c) a idade dessa pessoa em dias; 
        d) a idade dessa pessoa em semanas.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int ano_nascimento, ano_atual;

    printf("\nOla! Digite algumas informacoes abaixo\n");
    printf("\nAno de nascimento: ");
    scanf("%i", &ano_nascimento);
    printf("\nAno atual: ");
    scanf("%i", &ano_atual);

    printf("\nA sua idade em anos: %i", ano_atual - ano_nascimento);
    printf("\nA sua idade em meses: %i", (ano_atual - ano_nascimento) * 12);
    printf("\nA sua idade em semanas: %i", (ano_atual - ano_nascimento) * 52);
    printf("\nA sua idade em dias: %i\n\n", (ano_atual - ano_nascimento) * 365);

    system("pause");
    return 0;
}