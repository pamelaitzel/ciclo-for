#include <stdio.h>

int maximo(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int num1, num2;
    
    printf("Ingresa el primer numero: ");
    scanf("%d", &num1);

    printf("Ingresa el segundo numero: ");
    scanf("%d", &num2);

    int resultado = maximo(num1, num2);
    printf("El número máximo es: %d\n", resultado);
    
    return 0;
}