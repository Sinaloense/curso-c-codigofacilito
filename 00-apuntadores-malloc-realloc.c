#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void aleatorio(int *vector, int N)
{
    int i;
    srand(time(NULL));
    
    for(i = 0; i < N; i++)
    {
        *(vector+i) = rand() % 3;
        printf("%i, ", *(vector+i));
    }
    
    printf("\n");
}

int main()
{
    // Variable para almacenar numero de elementos del vector
    int N = 10;

    // Arreglo para almacenar elementos del vector
    int *vector;
    
    // Asignarle un tamaño al vector, N * 2 bytes, INT = 2 bytes
    vector = (int*)malloc(N * sizeof(int));
    
    // Si no se pudo asignar la memoria
    if(vector == NULL)
    {
        printf("No se ha podido reservar espacio de memoria.\n");
    }
    else
    {
        // Generar numeros aleatorios
        aleatorio(vector, N);

        // Ciclo elementos del vector
        for(int i = 0; i < N; i++)
        {
            // Ciclo elementos del vector sin index actual
            for(int j = i + 1; j < N; j++)
            {
                // Si el valor del index actual es igual a otro index en el vector
                if(*(vector + i) == *(vector + j))
                {
                    // Reducir tamano contador para eliminar elemento con realloc
                    N--;
                    
                    // Ciclo para mover elementos a la izquierda, ya que se eliminaran los ultimos con realloc
                    for(int k = j; k < N; k++)
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
        vector = (int*)realloc(vector, N * sizeof(int));
        
        if(vector == NULL)
        {
            printf("No se ha podido reservar espacio de memoria.\n");
        }
        else
        {
            for(int i = 0; i < N; i++)
            {
                printf("%i, ", *(vector + i));
            }
            
            printf("\n");
        }
    }

    return 0;
}