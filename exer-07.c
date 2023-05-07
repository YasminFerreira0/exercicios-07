#include <stdio.h>
void main ()
{
    int i, n, termo_ant, ultimo_termo, aux;

    termo_ant = 0;
    ultimo_termo = 1;

    printf("Informe o numero de termos: ");
    scanf("%d", &n);

    printf("\nA serie de fibonacci com %d termos", n);

    for (i = 0; i < n; i++){
        printf("\n%d", ultimo_termo);

        aux = ultimo_termo;
        ultimo_termo = ultimo_termo + termo_ant;
        termo_ant = aux;
    }
    printf("\n\n");
}
