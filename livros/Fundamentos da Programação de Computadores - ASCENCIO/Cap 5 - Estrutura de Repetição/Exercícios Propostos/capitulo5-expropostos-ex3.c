/* 3. Faça um programa que receba a idade de oito pessoas, calcule e mostre:

a) a quantidade de pessoas em cada faixa etária;
b) a porcentagem de pessoas na primeira faixa etária com relação ao total de pessoas;
c) a porcentagem de pessoas na última faixa etária com relação ao total de pessoas.

FAIXA ETÁRIA             IDADE
    1a                Até 15 anos
    2a              De 16 a 30 anos
    3a              De 31 a 45 anos
    4a              De 46 a 60 anos
    5a             Acima de 60 anos*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int idade[8], quant_1a=0, quant_2a=0, quant_3a=0, quant_4a=0, quant_5a=0;
	float porcentagem1, porcentagem2;
	
	for (int i=0;i<8;i++) {
		printf("Digite sua idade, usuario %i: ", i+1);
		scanf("%i", &idade[i]);
	}
	
	// a) A quantidade de pessoas em cada faixa etária;
	for (int i=0;i<8;i++) {
		
		if (idade[i] > 0 && idade[i] < 16) {
			quant_1a++;
		} else if (idade[i] > 15 && idade[i] < 31) {
			quant_2a++;
		} else if (idade[i] > 30 && idade[i] < 46) {
			quant_3a++;
		} else if (idade[i] > 45 && idade[i] < 61) {
			quant_4a++;
		} else if (idade[i] > 60) {
			quant_5a++;
		}
	}
	
	// b) a porcentagem de pessoas na primeira faixa etária com relação ao total de pessoas;
	porcentagem1 = (quant_1a/8.0)*100.0;
	// ou porcentagem1 = ((float)quant_1a/8)*100;
	printf("\nA porcentagem de pessoas na primeira faixa etaria: %.1f%%", porcentagem1);
	
	// c) a porcentagem de pessoas na última faixa etária com relação ao total de pessoas.
	porcentagem2 = (quant_5a/8.0)*100.0;
	// ou porcentagem2 = ((float)quant_5a/8)*100;
	printf("\nA porcentagem de pessoas na ultima faixa etaria: %.1f%%\n\n", porcentagem2);
		
	system("pause");
	return 0;
}