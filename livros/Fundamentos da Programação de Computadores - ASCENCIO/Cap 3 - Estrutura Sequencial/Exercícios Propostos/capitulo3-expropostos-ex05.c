// 5. Faça  um  programa  que  receba  o  preço  de  um  produto,  calcule  e  mostre  o  novo  preço,  sabendo-se  
// que este sofreu um desconto de 10%

#include <stdio.h>
#include <stdlib.h>

int main() {

    float preco, novo_preco;

    printf("\nOla! Digite o preco do produto para calcularmos seu desconto!\n");
    printf("\nPreco: R$");
    scanf("%f", &preco);

    novo_preco = preco - (preco * 0.1);

    printf("\nCom o desconto de 10%%, o produto de R$%.2f passara a ser R$%.2f\n\n", preco, novo_preco);

    system("pause");
    return 0;
}