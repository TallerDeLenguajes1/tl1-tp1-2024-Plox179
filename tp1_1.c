#include <stdio.h>

int main() {
    printf("Hola mundo\n");

    int numero=79;
    int *puntero=&numero;

    printf("%d\n", *puntero); // muestro el contenido del puntero
    printf("%p\n", *puntero); // muestro la dirección de memoria almacenada por el puntero
    printf("%p\n", &numero); // muestro la dirección de memoria de la variable numero
    printf("%p\n", &puntero); // muestro la dirección de memoria del puntero
    printf("%d\n", sizeof(numero));

    return 0;
}
