#include <stdio.h>

// Maco cronstante
#define PI 3.14159

// Macro función CUBO
#define CUBO(a) (a * a * a)

int main(int argc, char const *argv[])
{
    int a = 3;

    printf("El cubo de la variable a es: %d\n", CUBO(a));

    return 0;
}
