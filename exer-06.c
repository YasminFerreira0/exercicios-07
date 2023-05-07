#include <stdio.h>
void main ()
{
    int i, n;

    printf("Informe um valor: ");
    scanf("%d", &n);

    for(i = 1; i * i <= n; i++){}

    i--;
    printf("\nO maior quadrado menor que %d e: %d (quandrado de %d)", n, i*i, i);

}
