#include <stdio.h>
void main ()
{
    int i, maior, n;

    maior = 0;
    for (i=1; i<=10; i++){
        printf("informe um numero interio: ");
        scanf("%d", &n);

        if (n>maior){
            maior = n;
        }
    }
    printf("\nO maior numero e: %d", maior);
}
