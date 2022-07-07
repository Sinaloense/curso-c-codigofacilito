#include <stdio.h>
#include <stdlib.h>

typedef struct libro
{
    char *nombre;
    struct libro *sig;
} tLibro;

tLibro *listaLibro(tLibro *lista)
{
    lista = NULL;

    return lista;
}

tLibro *agregarLibro(tLibro *lista, char *nombre)
{
    tLibro *nuevoLibro;
    nuevoLibro = (tLibro*)malloc(sizeof(tLibro));
    nuevoLibro->nombre = nombre;
    nuevoLibro->sig = NULL;

    tLibro *tmpNuevoLibro;

    if(lista == NULL)
    {
        lista = nuevoLibro;
    }
    else
    {
        tmpNuevoLibro = lista;

        // Ciclo para llegar al libro que no tenga hijos
        while(tmpNuevoLibro->sig != NULL)
        {
            tmpNuevoLibro = tmpNuevoLibro->sig;
        }

        // Asignarle hijo(libro) al ultimo libro
        tmpNuevoLibro->sig = nuevoLibro;
    }

    return lista;
}

int main(int argc, char const *argv[])
{
    // tLibro *lista = listaLibro(lista);
    tLibro *lista = NULL;

    lista = agregarLibro(lista, "El senor de los anillos");
    lista = agregarLibro(lista, "Volver al futuro");

    while(lista != NULL)
    {
        printf("%s\n", lista->nombre);
        lista = lista->sig;
    }

    return 0;
}
