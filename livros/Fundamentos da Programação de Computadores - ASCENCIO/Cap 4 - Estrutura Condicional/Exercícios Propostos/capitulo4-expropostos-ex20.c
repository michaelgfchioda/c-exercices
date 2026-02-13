/* 20. Faça um programa que receba a idade de um nadador e mostre sua categoria, usando as regras a seguir. 
    Para idade inferior a 5, deverá mostrar mensagem.

    CATEgoRIA           IDADE
    Infantil            5 a 7
    Juvenil             8 a 10
   Adolescente         11 a 15
    Adulto             16 a 30
    Sênior           Acima de 30
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int idade;

    printf("\n\tOla, nadador(a)! Digite sua idade para verificarmos sua categoria\n");
    printf("\n\tIdade: ");
    scanf("%i", &idade);

    if (idade < 5) {
        printf("\n\tDesculpe, mas infelizmente voce nao tem idade suficiente para competir.\n\n");
    } else if (idade >= 5 && idade <=7) {
        printf("\n\tVoce esta na categoria Infantil.\n\n");
    } else if (idade > 7 && idade <= 10) {
        printf("\n\tVoce esta na categora Juvenil.\n\n");
    } else if (idade > 10 && idade <= 15) {
        printf("\n\tVoce esta na categoria Adolescente.\n\n");
    } else if (idade > 15 && idade <= 30) {
        printf("\n\tVoce esta na categoria Adulto.\n\n");
    } else {
        printf("\n\tVoce esta na categoria Senior.\n\n");
    }

    system("pause");
    return 0;
}