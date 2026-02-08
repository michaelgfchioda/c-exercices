/* 6. Faça um programa que receba dois números e execute uma das operações listadas a seguir, de acordo com a 
    escolha do usuário. Se for digitada uma opção inválida, mostre mensagem de erro e termine a execução do 
    programa. As opções são: 
        a) O primeiro número elevado ao segundo número. 
        b) Raiz quadrada de cada um dos números. 
        c) Raiz cúbica de cada um dos números.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    float num1, num2;
    int opcao;

    printf("\tOla! Digite dois numeros para realizarmos algumas operacoes!\n");
    printf("\nPrimeiro numero: ");
    scanf("%f", &num1);
    printf("Segundo numero: ");
    scanf("%f", &num2);

    printf("\nEscolha uma das opcoes abaixo:\n");
    printf("1 - Elevar o primeiro numero ao segundo numero\n");
    printf("2 - Calcular a raiz quadrada de cada um dos numeros\n");
    printf("3 - Calcular a raiz cubica de cada um dos numeros\n");
    printf("\nOpcao: ");
    scanf("%i", &opcao);

    if (opcao == 1) {
        printf("\nO numero %.2f elevado ao numero %.2f eh igual a %.2f\n\n", num1, num2, pow(num1, num2));

    } else if (opcao == 2) {
        if (num1 < 0 || num2 < 0) {
            printf("\nNao eh possivel calcular a raiz quadrada de numeros negativas...\n\n");
        } else {
            printf("\nA raiz quadrada de %.2f eh %.2f", num1, sqrt(num1));
            printf("\nA raiz quadrada de %.2f eh %.2f\n\n", num2, sqrt(num2));
        }
    } else if (opcao == 3) {
        printf("\nA raiz cubica de %.2f eh %.2f", num1, cbrt(num1));
        printf("\nA raiz cubica de %.2f eh %.2f\n\n", num2, cbrt(num2));
    } else {
        printf("\nOpcao invalida...\n\n");
    }

    system("pause");
    return 0;
}