#include <stdio.h>
#include <stdlib.h>

int troca(int *x, int *y)
{
    int aux = *x;
    *x = *y;
    *y = aux;
}

int main(int argc, char const *argv[])
{
    int a, b;
    printf("Informe o valor de A e B no formado A:B\n>>");
    scanf("%d:%d", &a, &b);

    printf("Digitado\t[%d:%d]\n", a, b);
    troca(&a, &b);
    printf("Trocado \t[%d:%d]\n", a, b);

    return 0;
}
