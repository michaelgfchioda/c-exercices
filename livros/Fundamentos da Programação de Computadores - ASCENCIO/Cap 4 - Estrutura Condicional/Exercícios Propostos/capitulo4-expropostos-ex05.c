/* 5. Faça um programa que receba dois números e execute as operações listadas a seguir, de acordo com a escolha do usuário.
    ESCoLhA Do uSuáRIo          oPERAção
            1         Média entre os números digitados
            2         Diferença do maior pelo menor
            3         Produto entre os números digitados
            4         Divisão do primeiro pelo segundo
    Se a opção digitada for inválida, mostre uma mensagem de erro e termine a execução do programa. 
    Lembre-se de que, na operação 4, o segundo número deve ser diferente de zero
*/
#include <stdio.h>
#include <stdlib.h>

int main() {

    float num1, num2;
    int opcao;

    printf("\nOla! Digite dois numeros e, em seguida, escolha a operacao desejada!\n");
    printf("Primeiro numero: ");
    scanf("%f", &num1);
    printf("Segundo numero: ");
    scanf("%f", &num2);

    printf("\n==================================================");
    printf("\n1     ->      Media entre os numeros");
    printf("\n2     ->      Diferenca do maior pelo menor");
    printf("\n3     ->      Produto entre os numeros");
    printf("\n4     ->      Divisao do primeiro pelo segundo");
    printf("\n==================================================\n");

    printf("\nOperacao: ");
    scanf("%i", &opcao);

    if (opcao == 1) {
        printf("\nOperacao escolhida: Media entre os numeros");
        printf("\nA media entre os numeros %.2f e %.2f eh %.2f\n\n", num1, num2, (num1 + num2)/2);
    }
    else if (opcao == 2) {
        printf("\nOperacao escolhida: Diferenca do maior pelo menor");
        if (num1 > num2) {
            printf("\nA diferenca do numero %.2f pelo %.2f eh %.2f\n\n", num1, num2, (num1 - num2));
        } else {
            printf("\nA diferenca do numero %.2f pelo %.2f eh %.2f\n\n", num2, num1, (num2 - num1));
        }
    }
    else if (opcao == 3) {
        printf("\nOperacao escolhida: Produto entre os numeros");
        printf("\nO produto entre os numeros %.2f e %.2f eh %.2f\n\n", num1, num2, (num1 * num2));
    }
    else if (opcao == 4) {
        if (num2 != 0) {
            printf("\nOperacao escolhida: Divisao do primeiro pelo segundo");
            printf("\nA divisao do numero %.2f pelo %.2f eh %.2f\n\n", num1, num2, (num1/num2));
        } else {
            printf("ERRO! O segundo numero deve ser diferente de zero\n\n");
        }
    } 
    else {
        printf("\nERRO! Operacao inexistente!\n\n");
    }

    system("pause");
    return 0;
}