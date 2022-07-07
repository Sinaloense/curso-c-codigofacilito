#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TOTAL_PERROS 3

int size;

typedef struct dog
{
    char name[20];
    char *pName;
} tDog;

tDog dogs[TOTAL_PERROS];

int main(int argc, char const *argv[])
{
    // Ciclo perros
    for (int i = 0; i < TOTAL_PERROS; i++)
    {
        printf("Ingrese el nombre del perro\n");
        fgets(dogs[i].name, sizeof(dogs[i].name), stdin);

        size = strlen(dogs[i].name);

        printf("El tamano del nombre es: %d\n", size);

        // Asignar memoria a pName en base al tamaño de name
        dogs[i].pName = malloc(size * sizeof(char));

        if(dogs[i].pName == NULL)
        {
            printf("Error al asignar memoria\n");
        }
        else
        {
            strcpy(dogs[i].pName, dogs[i].name);

            // Liberar memoria y no imprimir nada o imprimir errores
            // -> se utiliza para apuntar a memoria
            // free(dogs->pName);

            // Es lo mismo que esto, pero es mas legible usar ->
            // free((*dogs).pName);
        }
    }

    // Ciclo perros
    for (int i = 0; i < TOTAL_PERROS; i++)
    {
        printf("El nombre del perro es: %s\n", dogs[i].pName);
    }

    return 0;
}
