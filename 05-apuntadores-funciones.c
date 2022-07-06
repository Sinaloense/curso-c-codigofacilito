#include <stdio.h>

int cubo(int *n)
{
    *n = *n * *n * *n;
}

int main(int argc, char const *argv[])
{
    int num = 5;

    printf("Valor original %d\n", num);

    cubo(&num);

    printf("Valor nuevo %d\n", num);

    return 0;
}