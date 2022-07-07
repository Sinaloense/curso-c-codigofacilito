#include <stdio.h>

struct perro
{
    char nombre[30];
    float peso;
    int edadMeses;
}
perro1={ "Checo", 6.50, 2 },
perro2={ "Muneca", 27.43, 72 };

void imprimirDatosPerro(struct perro datosPerro)
{
    printf("Datos del perro:\n");
    printf("Nombre: %s\n", datosPerro.nombre);
    printf("Peso: %.2f KG\n", datosPerro.peso);
    printf("Edad: %d meses\n\n", datosPerro.edadMeses);
}

int main(int argc, char const *argv[])
{
    imprimirDatosPerro(perro1);
    imprimirDatosPerro(perro2);

    return 0;
}

