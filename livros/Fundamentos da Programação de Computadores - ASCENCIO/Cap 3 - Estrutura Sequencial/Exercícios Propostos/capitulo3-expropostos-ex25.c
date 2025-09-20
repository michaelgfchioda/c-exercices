/* 25. Faça um programa que receba uma hora (uma  variável para hora e outra para minutos), calcule e mostre: 
        a) a hora digitada convertida em minutos; 
        b) o total dos minutos, ou seja, os minutos digitados mais a conversão anterior; 
        c) o total dos minutos convertidos em segundos.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int hora, para_min, min, total_min, seg;

    printf("\nOla! Digite uma hora do dia e os minutos!\n");
    printf("\nHora: ");
    scanf("%i", &hora);
    printf("Minutos: ");
    scanf("%i", &min);

    para_min = hora * 60;
    total_min = min + para_min;
    seg = total_min * 60;

    printf("\nA hora digitada '%i', em minutos: %i min", hora, para_min);
    printf("\nOs minutos digitados '%i', com a hora digitada em minutos '%i', fica: %i min", min, para_min, total_min);
    printf("\nO total de minutos '%i', em segundos: %is\n\n", total_min, seg);

    system("pause");
    return 0;
}