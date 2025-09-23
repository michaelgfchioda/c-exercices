/* 2. Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem que se encontra 
        na tabela a seguir:
    
    MÉDIA ARITMÉTICA    MENSAGEM
        0,0 3,0         Reprovado
        3,0 7,0           Exame
        7,0 10,0        Aprovado
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    float nota1, nota2, soma, media_aritmetica;

    printf("\nOla, aluno(a)! Digite suas notas abaixo para calcularmos a sua media!\n");
    printf("\nPrimeira nota: ");
    scanf("%f", &nota1);
    printf("Segunda nota: ");
    scanf("%f", &nota2);

    printf("\nCalculando...\n");

    soma = nota1 + nota2;
    media_aritmetica = soma / 2;

    if (media_aritmetica >= 0 && media_aritmetica < 3) {
        printf("\nCom a media %.2f, infelizmente voce foi REPROVADO... :(\n\n", media_aritmetica);
    }
    if (media_aritmetica > 2.9 && media_aritmetica < 7) {
        printf("\nCom a media %.2f, voce tera que fazer um EXAME para melhorar...\n\n", media_aritmetica);
    }
    if (media_aritmetica > 6.9 && media_aritmetica < 10.1) {
        printf("\nCom a media %.2f, voce foi APROVADO!\n\n", media_aritmetica);
    }

    system("pause");
    return 0;
}