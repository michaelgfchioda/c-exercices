// 1. Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas e a 
// mensagem de aprovado ou reprovado, considerando para aprovação média 7.

#include <stdio.h>
#include <stdlib.h>

int main() {

    float nota1, nota2, nota3, nota4, soma, media;

    printf("\nOla! Digite suas quatro notas para verificarmos sua situacao!");
    printf("\nNota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);
    printf("Nota 3: ");
    scanf("%f", &nota3);
    printf("Nota 4: ");
    scanf("%f", &nota4);

    soma = nota1 + nota2 + nota3 + nota4;
    media = soma / 4;

    if (media >= 7) {
        printf("\nParabens! Voce foi APROVADO com media %.2f!\n\n", media);
    } else {
        printf("\nCom a media %.2f, infelizmente voce foi REPROVADO...\n\n", media);
    }

    system("pause");
    return 0;
}
