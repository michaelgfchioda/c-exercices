/* 10. O preço ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos, 
        ambos aplicados ao custo de fábrica. As porcentagens encontram-se na tabela a seguir. 
        Faça um programa que receba o custo de fábrica de um carro e mostre o preço ao consumidor.

    CUSTO DE FÁBRICA                            % DO DISTRIBUIDOR   % DOS IMPOSTOS
 Até R$ 12.000,00                                        5               isento
 Entre R$ 12.000,00 e R$ 25.000,00                      10                 15
 Acima de R$ 25.000,00                                  15                 20
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    // preco_consumidor_newcar = custo_fabrica + custo_fabrica * (porc_distribuidor / 100) + custo_fabrica * (porc_impostos / 100);
    float preco_consumidor_newcar, custo_fabrica, porc_distribuidor, porc_impostos;

    printf("\n\tOla, informe o custo de fabrica de um carro: R$");
    scanf("%f", &custo_fabrica);

    if (custo_fabrica > 25000) {
        porc_distribuidor = custo_fabrica * 0.15;
        porc_impostos = custo_fabrica * 0.20;
    } else if (custo_fabrica > 12000) {
        porc_distribuidor = custo_fabrica * 0.10;
        porc_impostos = custo_fabrica * 0.15;
    } else {
        porc_distribuidor = custo_fabrica * 0.05;
        porc_impostos = 0;
    }

    preco_consumidor_newcar = custo_fabrica + porc_distribuidor + porc_impostos;
    printf("\nO preco que o consumidor pagara por um carro novo sera de: R$%.2f\n\n", preco_consumidor_newcar);

    system("pause");
    return 0;
}