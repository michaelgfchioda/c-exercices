/* 5. Faça um programa que mostre as tabuadas dos números de 1 a 10.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("\t--- Tabuada dos numeros de 1 a 10 ---\n\n");
	for (int i=1;i<11;i++) {
		for (int j=0;j<11;j++) {
			printf("\t\t%i x %i = %i\n", i, j, i*j);
		}
		printf("\n");
	}
	
	printf("\n\n");	
	
	system("pause");
	return 0;
	
	
	// ------------------ ou ------------------
	
/*	int num;
	
	while (!num == 0) {
		
		printf("\t0 - Sair do sistema\n");
		printf("\nDigite um numero para verificar sua tabuada: ");
		scanf("%i", &num);
		
		if (num == 0) {
			printf("\nSaindo...\n\n");
		} else if (num < 11) {
			printf("\n\t--- Tabuada do numero %i ---\n", num);
		    for (int i=0;i<11;i++) {
			    printf("\t\t%i x %i = %i\n", num, i, num*i);
		    }
		    printf("\n\n");
		    system("pause");
		    system("cls");
		} else {
			printf("\nNao existe tabuada do numero %i...\nEscolha entre 1 e 10\n\n", num);
			system("pause");
			system("cls");
		}
		
	}	
	
	system("pause");
	return 0;
*/	
	
}