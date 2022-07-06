#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Variable para almacenar tamaño del arreglo
    int sizeArray;

    printf("Tamano del arreglo: \n");
    scanf("%d", &sizeArray);

    int age[sizeArray]; // Si da warning es por que vscode no soporta c99, pero el compilador si

    // Ciclo para obtener valores y almacenarlos en el arreglo
    for (int i = 0; i < sizeArray; i++)
    {
        printf("Ingrese el valor %d\n", i + 1);
        scanf("%d", &age[i]);
    }

    printf("Los valores del arreglo son\n");

    // Ciclo para imprimir valores del arreglo
    for (int i = 0; i < sizeArray; i++)
    {
        printf("%d\n", age[i]);
    }



    // // Arreglo multidimensional
    // int multi[2][3] = { { 5, 3, 1 }, { 6, 4, 2 } };

    // printf("%d\n", multi[0][2]);

    return 0;
}
