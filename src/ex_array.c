#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int const limit = 6;

    int *v = malloc(limit * sizeof(int));
    // int v[limit];

    for (int i = 0; i < limit; i++)
    {
        printf("digite um valor: ");
        scanf("%d", (v + i));
    }

    printf("Valores lidos: ");
    for (int i = 0; i < limit; i++)
    {
        printf(" %d", *(v + i)); //v[i] ~ *(v+i)
    }
    printf("\n");
    return 0;
}
