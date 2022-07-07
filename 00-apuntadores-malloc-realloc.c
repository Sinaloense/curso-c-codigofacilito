#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void aleatorio(int *vector, int totalElementos)
{
    // Semilla para generar números aleatorios diferentes cada vez que se se ejecuta el programa
    srand(time(NULL));
    
    // Ciclo para generar números aleatorios
    for(int i = 0; i < totalElementos; i++)
    {
        *(vector+i) = rand() % 3;
        printf("%d, ", *(vector+i));
    }
    
    printf("\n");
}

int main()
{
    // Variable para asignarle memoria para X elementos al puntero
    int totalElementos = 10;
    
    // Arreglo para almacenar elementos del vector
    int *vector;
    
    // Asignarle un tamaño al vector, totalElementos * 2 bytes, INT = 2 bytes
    vector = (int*)malloc(totalElementos * sizeof(int));
    
    // Si no se pudo asignar la memoria
    if(vector == NULL)
    {
        printf("No se ha podido reservar espacio de memoria.\n");
    }
    else
    {
        // Generar numeros aleatorios
        aleatorio(vector, totalElementos);

        // Ciclo elementos del vector
        for(int i = 0; i < totalElementos; i++)
        {
            // Ciclo elementos del vector sin index actual
            for(int j = i + 1; j < totalElementos; j++)
            {
                // Si el valor del index actual es igual a otro index en el vector
                if(*(vector + i) == *(vector + j))
                {
                    // Reducir tamano contador para eliminar elemento con realloc
                    totalElementos--;
                    
                    // Ciclo para mover elementos a la izquierda, ya que se eliminaran los ultimos con realloc
                    for(int k = j; k < totalElementos; k++)
                    {
                        // Mover valores de derecha a izquierda
                        *(vector + k) = *(vector + k + 1);
                    }

                    // Reducimos el index actual ya que movimos elementos a la izquierda
                    i--;
                }
            }
            
        }
        
        // Redimensionar vector, conservando sus valores
        vector = (int*)realloc(vector, totalElementos * sizeof(int));
        
        if(vector == NULL)
        {
            printf("No se ha podido reservar espacio de memoria.\n");
        }
        else
        {
            for(int i = 0; i < totalElementos; i++)
            {
                printf("%d, ", *(vector + i));
            }
            
            printf("\n");
        }
    }

    return 0;
}