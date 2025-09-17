// 18. Faça  um  programa  que  receba  uma  temperatura  em  celsius,  calcule  e  mostre  essa  temperatura  em  
// Fahrenheit. sabe-se que F = (C * 1.8) + 32. 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    float celcius, fahrenheit;

    printf("\nOla! Digite o valor da temperatura que deseja converter para Fahreinheit!");
    printf("\nTemperatura em Celcius: ");
    scanf("%f", &celcius);

    fahrenheit = (celcius*1.8)+32;

    printf("\nConvertendo %.2fC para Fahrenheit, temos: %.2fF\n\n", celcius, fahrenheit);

    system("pause");
    return 0;
}