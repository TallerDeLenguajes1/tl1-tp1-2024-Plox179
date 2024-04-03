#include <stdio.h>

int cuadrado(int num) {
    return num * num;
}

void calcularCuadrado(int num, int *resultado) {
    *resultado = num * num;
}

void invertir(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void orden(int *a, int *b) {
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int numero, resultado;
    
//a) Haga una función que devuelva el cuadrado de un número

    printf("Ingresa un numero: ");
    scanf("%d", &numero);
    
    resultado = cuadrado(numero);
    printf("El cuadrado de %d es: %d\n", numero, resultado);

//b) Haga la función anterior, pero devolviendo un tipo void

    printf("Ingresa otro numero: ");
    scanf("%d", &numero);

    calcularCuadrado(numero, &resultado);
    printf("El cuadrado de %d es: %d\n", numero, resultado);

//c) Al recibir una variable muestre por pantalla la dirección y el contenido de la variable
    
    printf("Direccion de la variable: %p\n", (void*)&numero);
    printf("Contenido de la variable: %d\n", numero);

//d) Dado dos parámetros de entrada, deberá invertir los valores entre ambos

    int num1, num2; 

    printf("Ahora vamos a invertir el los valores de los numeros que ingrese a continuacion.\n ");

    printf("Ingresa un numero: ");
    scanf("%d", &num1);

    printf("Ingresa otro numero diferente: ");
    scanf("%d", &num2);

    invertir(&num1, &num2);
    printf("Despues del intercambio:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

//e) Dado dos parámetros de entrada, deberá devolverlos de forma ordenada, en el primer parámetro el menor y en el segundo el mayor.
    
    printf("Ahora vamos a ordenar los valores de los numeros ingresados.\n ");

    orden(&num1,&num2);
    printf("Despues de ordenar:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);
    
    return 0;
}