#include <stdio.h>
void main ()
/*Construa um programa que imprima a tabela de equivalência de graus Fahrenheit para
centígrados. Os limites são de 50 a 70 graus Fahrenheit com intervalo de 1 grau.
Fórmula: C = 5/9 *(F -32)*/
{
    int i;
    float celcius;
    for (i=50; i<=70;i++){
        celcius = (5.0 / 9.0) * (i - 32.0);
        printf("%f\n", celcius);
    }
}
