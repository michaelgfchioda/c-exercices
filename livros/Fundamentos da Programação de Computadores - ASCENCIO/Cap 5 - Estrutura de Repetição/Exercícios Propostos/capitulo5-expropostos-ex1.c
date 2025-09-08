/* 1. Faça um programa que leia cinco grupos de quatro valores (A, B, C, D) e mostre-os na ordem lida. 
Em seguida, organize-os em ordem crescente e decrescente.*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int grupos[5][4]; // Matriz para armazenar os valores dos grupos

    // Entrada dos valores
    printf("Digite os valores para cada grupo:\n");
    for (int i = 0; i < 5; i++) {
        printf("Grupo %d:\n", i + 1);
        for (int j = 0; j < 4; j++) {
            printf("  Valor %d: ", j + 1);
            scanf("%d", &grupos[i][j]); // Lê os valores para cada grupo
        }
    }

    // Mostrar valores na ordem lida
    printf("\nValores na ordem lida:\n");
    for (int i = 0; i < 5; i++) {
        printf("Grupo %d: ", i + 1);
        for (int j = 0; j < 4; j++) {
            printf("%d ", grupos[i][j]); // Exibe os valores como foram inseridos
        }
        printf("\n");
    }

    // Ordenar e mostrar valores em ordem crescente e decrescente
    for (int i = 0; i < 5; i++) {
        int temp[4]; // Array temporário para ordenação

        // Copiar valores do grupo para o array temporário
        for (int j = 0; j < 4; j++) {
            temp[j] = grupos[i][j];
        }

        // Ordenar o array temporário em ordem crescente
        for (int j = 0; j < 4 - 1; j++) {
            for (int k = j + 1; k < 4; k++) {
                if (temp[j] > temp[k]) { // Se o elemento atual for maior, troca
                    int aux = temp[j];
                    temp[j] = temp[k];
                    temp[k] = aux;
                }
            }
        }

        // Exibir valores em ordem crescente
        printf("\nGrupo %d ordenado:\n", i + 1);
        printf("  Crescente: ");
        for (int j = 0; j < 4; j++) {
            printf("%d ", temp[j]);
        }

        // Reordenar o array temporário em ordem decrescente
        for (int j = 0; j < 4 - 1; j++) {
            for (int k = j + 1; k < 4; k++) {
                if (temp[j] < temp[k]) { // Se o elemento atual for menor, troca
                    int aux = temp[j];
                    temp[j] = temp[k];
                    temp[k] = aux;
                }
            }
        }

        // Exibir valores em ordem decrescente
        printf("\n  Decrescente: ");
        for (int j = 0; j < 4; j++) {
            printf("%d ", temp[j]);
        }
        
		printf("\n\n");
    }
    
    system("pause");
    return 0;
}
