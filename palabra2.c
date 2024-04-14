#include <stdio.h>
#include <string.h>

int main() {
    char palabra1[100], palabra2[100], resultado[200];
    int i, n;
    printf("Ingresa la primera palabra: ");
    scanf("%s", palabra1);
    printf("Ingresa la segunda palabra: ");
    scanf("%s", palabra2);
    n = strlen(palabra1);
    strcpy(resultado, palabra1); 
    for (i = 0; i < n; i++) {
        strcat(resultado, palabra2); 
    }
    printf("El resultado de concatenar la segunda palabra %d veces a la primera es: %s\n", n, resultado);

    return 0;
}