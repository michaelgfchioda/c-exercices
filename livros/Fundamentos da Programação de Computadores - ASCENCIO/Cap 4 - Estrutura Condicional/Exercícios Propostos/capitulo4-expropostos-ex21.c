/* 21. Faça um programa que receba o preço de um produto e seu código de origem e mostre sua procedência. 
    A procedência obedece à tabela a seguir.

    CóDIgo DE oRIgEM        PRoCEDêNCIA
           1                    Sul
           2                   Norte
           3                   Leste
           4                   Oeste
        5 ou 6                Nordeste
        7 ou 8 ou 9           Sudeste
        10 a 20             Centro-oeste
        21 a 30               Nordeste

*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    float preco_produto;
    int codigo_origem;

    printf("\n\tOla! Digite o preco e o codigo de origem de um produto.\n");
    printf("\n\tR$");
    scanf("%f", &preco_produto);
    printf("\n\tCodigo de origem: ");
    scanf("%i", &codigo_origem);

    if (codigo_origem == 1) {
        printf("\n\tO produto de R$%.2f, cujo o codigo eh %i, tem procedencia na regiao Sul.\n\n", preco_produto, codigo_origem);
    } else if (codigo_origem == 2) {
        printf("\n\tO produto de R$%.2f, cujo o codigo eh %i, tem procedencia na regiao Norte.\n\n", preco_produto, codigo_origem);
    } else if (codigo_origem == 3) {
        printf("\n\tO produto de R$%.2f, cujo o codigo eh %i, tem procedencia na regiao Leste.\n\n", preco_produto, codigo_origem);
    } else if (codigo_origem == 4) {
        printf("\n\tO produto de R$%.2f, cujo o codigo eh %i, tem procedencia na regiao Oeste.\n\n", preco_produto, codigo_origem);
    } else if (codigo_origem == 5 || codigo_origem == 6) {
        printf("\n\tO produto de R$%.2f, cujo o codigo eh %i, tem procedencia na regiao Nordeste.\n\n", preco_produto, codigo_origem);
    } else if (codigo_origem == 7 || codigo_origem == 8 || codigo_origem == 9) {
        printf("\n\tO produto de R$%.2f, cujo o codigo eh %i, tem procedencia na regiao Sudeste.\n\n", preco_produto, codigo_origem);
    } else if (codigo_origem >= 10 && codigo_origem <= 20) {
        printf("\n\tO produto de R$%.2f, cujo o codigo eh %i, tem procedencia na regiao Centro-Oeste.\n\n", preco_produto, codigo_origem);
    } else if (codigo_origem >= 21 && codigo_origem <= 30) {
        printf("\n\tO produto de R$%.2f, cujo o codigo eh %i, tem procedencia na regiao Nordeste.\n\n", preco_produto, codigo_origem);
    } else {
        printf("\n\tO produto de R$%.2f, cujo o codigo eh %i, nao possui procedencia.\n\n", preco_produto, codigo_origem);
    }

    system("pause");
    return 0;
}