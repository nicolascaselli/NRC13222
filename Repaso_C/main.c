//esto es un comentario de una sola línea, el compilador la omitirá
#include <stdio.h>  //esto es como se incluyen las librerías a tu scrip. desde acá en adelante tendremos disponibles todas las funciones incluidas en el archivo stdio.h

int main(void) {
    int edad; //recordar que al procesar esta línea, se busca memoria disponible del tamaño del tipo de variable, y se le asigna a la variable edad. Ahora podremos acceder al valor almacenado en edad, y también a la dirección de memoria de edad anteponiéndole el ampersan (&)
    float peso;
    printf("Hola, ingresa tu edad: ");
    // gracias a que incluimos la librería stdio.h podemos utilizar la función printf y scanf
    scanf("%i", &edad);
    printf("\nIngresa \ttu peso: ");
    scanf("%f", &peso);
    /*
    printf("\nEl valor de la variable edad es: %i\n", edad);
    printf("El valor de la variable peso es: %3.2f\n", peso);
    */
    printf("\nEl valor de Edad es: %i\nEl valor de peso es: %3.2f", edad, peso);
    printf("\nLos valores de las variables en EXADECIMAL son:\nEdad es: %X\npeso es: %X", edad, peso);
    printf("\nLos valores de las variables en Cientifico son:\nEdad es: %e\npeso es: %E", edad, peso);
    printf("\nlas direcciones de memorias son:\n@Edad es: %X\n@peso es: %X", &edad, &peso);
    return 0;
}

/*
 *
 *tareas:
 *defina las entradas, las salidas y posibles pasos a seguir del algoritmo, anótelas antes de generar el código.
 *Realizar algorimos que:
 *1 - Permita calcular el promedio de edades, todas ingresadas por teclado, mostrando el resultado al ingresar -1.
 *2 - Muestre el valor menor de una serie de números enteros positivos ingresados. Finalice al ingresar un número negativo.
 *
 *
 */