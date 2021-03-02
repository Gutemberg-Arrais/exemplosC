
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int x, y;
    int *p; //pode quardar endereço de memória (no caso de inteiros)
    p = &x;
    x = 4;
    *p = 20;
    p = malloc(sizeof(int));
    *p = 55;
    y = 3 + x;
    printf("x=%2d\n&x=%p\ny=%2d\n&y=%p\np=%p\n*p=%d\n", x, &x, y, &y, p, *p);
    free(p);
    p = NULL;
    return 0;
}
