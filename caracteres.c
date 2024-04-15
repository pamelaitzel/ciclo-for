#include <stdio.h>
#include <string.h>

void caracteresInversos() {
    char caracteres[100]; 
    int longitud = 0;
    char caracter;

    printf("Ingresa caracteres (presiona espacio o enter para terminar): ");

    
    while ((caracter = getchar()) != ' ' && caracter != '\n') {
        caracteres[longitud] = caracter;
        longitud++;
    }
    caracteres[longitud] = '\0'; 

   
    printf("Caracteres en orden inverso: ");
    for (int i = longitud - 1; i >= 0; i--) {
        printf("%c", caracteres[i]);
    }
    printf("\n");
}

int main() {
    caracteresInversos();
    return 0;
}