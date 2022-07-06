#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Variable para almacenar numero
    int a = 2;

    // Declarar puntero y asignarle la variable "a" por referencia, ya que el puntero es una dirección de memoria
    int *apt = &a;

    // Imprimir el valor del puntero "apt"
    printf("%d\n", *apt);

    return 0;
}
