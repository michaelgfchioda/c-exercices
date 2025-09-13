// 7. Faça um programa que receba o peso de uma pessoa, calcule e mostre: 
// a) o novo peso, se a pessoa engordar 15% sobre o peso digitado; 
// b) o novo peso, se a pessoa emagrecer 20% sobre o peso digitado. 

#include <stdio.h>
#include <stdlib.h>

int main() {

    float peso, novo_peso_engordar, novo_peso_emagrecer;

    printf("\nOla! Digite seu peso: ");
    scanf("%f", &peso);

    novo_peso_engordar = peso + (peso * 0.15);
    novo_peso_emagrecer = peso - (peso * 0.20);

    printf("\nSe voce engordar 15%%, seu peso saira de %.2fkg e passara a ser %.2fkg, adquirindo %.2f quilos a mais.", peso, novo_peso_engordar, (novo_peso_engordar - peso));
    printf("\nJa se voce emagrecer 20%%, seu peso saria de %.2fkg e passara a ser %.2fkg, perdendo %.2f quilos.\n\n", peso, novo_peso_emagrecer, (peso - novo_peso_emagrecer));

    system("pause");
    return 0;
}