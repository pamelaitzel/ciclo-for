#include <stdio.h>
#include <string.h>

int esPalindromo(char palabra[]) {
    int i, j;
    int longitud = strlen(palabra);
    for (i = 0, j = longitud - 1; i < j; i++, j--) {
        char c1 = palabra[i];
        if (c1 >= 'A' && c1 <= 'Z') {
            c1 = c1 - 'A' + 'a';
        }

        char c2 = palabra[j];
        if (c2 >= 'A' && c2 <= 'Z') {
            c2 = c2 - 'A' + 'a';
        }

        if (c1 != c2) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    char palabra[100];

    printf("Ingrese una palabra: ");
    scanf("%s", palabra);

    if (esPalindromo(palabra)) {
        printf("La palabra '%s' es un palíndromo.\n", palabra);
    } else {
        printf("La palabra '%s' no es un palíndromo.\n", palabra);
    }

    return 0;
}