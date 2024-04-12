#include <stdio.h>
#include <string.h>

int main() {
    char palabra1[100], palabra2[100];
    int comparacion;

    // Solicitar al usuario que ingrese las palabras
    printf("Ingresa la primera palabra: ");
    scanf("%s", palabra1);
    printf("Ingresa la segunda palabra: ");
    scanf("%s", palabra2);

    // Comparar las palabras utilizando la función strcmp de la biblioteca string.h
    comparacion = strcmp(palabra1, palabra2);

    // Determinar la relación entre las palabras e imprimir el resultado
    if (comparacion < 0) {
        printf("La palabra '%s' es menor que la palabra '%s'.\n", palabra1, palabra2);
        printf("Resultado: %d\n", comparacion);
    } else if (comparacion > 0) {
        printf("La palabra '%s' es mayor que la palabra '%s'.\n", palabra1, palabra2);
        printf("Resultado: %d\n", comparacion);
    } else {
        printf("Las palabras '%s' y '%s' son iguales.\n", palabra1, palabra2);
        printf("Resultado: %d\n", comparacion);
    }

    return 0;
}
