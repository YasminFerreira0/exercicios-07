#include <stdio.h>
void main ()
{
    int n, primo, i;
    primo = 1;

    printf("Infoem um numero: ");
    scanf("%d", &n);

    for (i=2; i <= n/2 && primo == 1; i++){
        if (n % i == 0)
            primo = 0;
    }
    if (primo == 1){
        printf("\nNumero primo.");
    }else{
        printf("\nNumero nao e primo");
    }

}
