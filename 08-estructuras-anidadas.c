#include <stdio.h>

#define TOTAL_PERROS 3

struct propietarioPerro
{
    char nombre[30];
    char direccion[100];
};

struct perro
{
    char nombre[30];
    float peso;
    int edadMeses;
    struct propietarioPerro propietario;
} perros[TOTAL_PERROS];

void imprimirDatosPerro(struct perro datosPerro)
{
    printf("Datos del perro:\n");
    printf("Nombre: %s\n", datosPerro.nombre);
    printf("Peso: %.2f KG\n", datosPerro.peso);
    printf("Edad: %d meses\n", datosPerro.edadMeses);
    printf("Nombre del propietario: %s\n", datosPerro.propietario.nombre);
    printf("Direccion del propietario: %s\n\n", datosPerro.propietario.direccion);

}

int main(int argc, char const *argv[])
{
    // Ciclo perros
    for(int i = 0; i < TOTAL_PERROS; i++)
    {
        printf("Ingrese los datos del perro %d\n", i + 1);

        printf("Nombre: ");
        scanf("%s", &perros[i].nombre);

        printf("Peso en KG: ");
        scanf("%f", &perros[i].peso);

        printf("Edad en meses: ");
        scanf("%d", &perros[i].edadMeses);

        printf("Nombre del propietario: ");
        scanf("%s", &perros[i].propietario.nombre);

        printf("Direccion del propietario: ");
        scanf("%s", &perros[i].propietario.direccion);

        printf("\n\n");
    }
    
    // Ciclo perros
    for(int i = 0; i < TOTAL_PERROS; i++)
    {
        imprimirDatosPerro(perros[i]);
    }

    return 0;
}
