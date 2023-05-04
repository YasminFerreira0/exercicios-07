#include <stdio.h>
void main ()
{
    int n, i, fat;

    printf("Informe um numero inteiro: ");
    scanf("%d", &n);

    fat = 1;
    if (n < 0){
        printf("\nNumero invalido");
    }else {
        for (i=1; i<=n; i++){
            fat = fat * i;
        }
    }
    printf("\nO fatoria do numero e: %d", fat);
}
