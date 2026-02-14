/* 25. Uma empresa decidiu dar uma gratificação de Natal a seus funcionários,
    baseada no número de horas extras e no número de horas que o funcionário faltou ao trabalho. 
    O valor do prêmio é obtido pela consulta à tabela que se segue, na qual:
    
    H = número de horas extras – (2/3 * (número de horas falta))

    h (MINuToS)         PRêMIo (R$)
     > = 2.400            500,00
   1.800 - 2.400          400,00
   1.200 - 1.800          300,00
    600 - 1.200           200,00
       < 600              100,00
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    float resultado_minutos, horas_extras, horas_faltou, premio;

    printf("\n\tOla, empresa! Digite abaixo o numero de horas extras e faltadas de seu funcionario.\n");
    printf("\n\tHoras extras: ");
    scanf("%f", &horas_extras);
    printf("\n\tHoras de faltas: ");
    scanf("%f", &horas_faltou);

    // Conversão de horas para minutos para realizar o cálculo
    horas_extras = horas_extras * 60;
    horas_faltou = horas_faltou * 60;

    // Cálculo para verificar a gratificação
    resultado_minutos = horas_extras - ((2 * (horas_faltou)) / 3);

    // Verificação do prêmio
    if (resultado_minutos < 600) {
        premio = 100.00;
    } else if (resultado_minutos >= 600 && resultado_minutos < 1200) {
        premio = 200.00;
    } else if (resultado_minutos >= 1200 && resultado_minutos < 1800) {
        premio = 300.00;
    } else if (resultado_minutos >= 1800 && resultado_minutos < 2400) {
        premio = 400.00;
    } else {
        premio = 500.00;
    }

    printf("\n\tComo o(a) funcionario(a) cumpriu %.2f horas extras e faltou %.2f horas, ele(a) recebera um premio de R$%.2f!\n\n", (horas_extras / 60), (horas_faltou / 60), premio);

    system("pause");
    return 0;
}