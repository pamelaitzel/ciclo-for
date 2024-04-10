#include <stdio.h>
#include <string.h>

#define MAX_LONGITUD_PALABRA 100

void intercambiar_palabras(char palabra1[], char palabra2[]) {
    char temp[MAX_LONGITUD_PALABRA];

    printf("Antes del intercambio: %s %s\n", palabra1, palabra2);

    strcpy(temp, palabra1);
    strcpy(palabra1, palabra2);
    strcpy(palabra2, temp);
    printf("Después del intercambio: %s %s\n", palabra1, palabra2);
}

int main() {
    char palabra1[MAX_LONGITUD_PALABRA];
    char palabra2[MAX_LONGITUD_PALABRA];
    printf("Ingrese la primera palabra: ");
    scanf("%s", palabra1);
    printf("Ingrese la segunda palabra: ");
    scanf("%s", palabra2);
    intercambiar_palabras(palabra1, palabra2);

    return 0;
}