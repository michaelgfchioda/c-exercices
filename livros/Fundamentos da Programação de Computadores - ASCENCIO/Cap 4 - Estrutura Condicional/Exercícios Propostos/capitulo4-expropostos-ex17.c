/* 17. Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é 4531. 
O programa deve mostrar uma mensagem de permissão de acesso ou não.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int senha;

    printf("\n\tOla! Digite sua senha para acessar o sistema:\n");
    printf("\n\tSenha: ");
    scanf("%i", &senha);

    if (senha == 4531) {
        printf("\n\tAcesso permitido! Seja bem-vindo.\n\n");
    } else {
        printf("\n\tAcesso negado! Senha incorreta...\n\n");
    }

    system("pause");
    return 0;
}