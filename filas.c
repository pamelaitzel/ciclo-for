#include <stdio.h>

int main() {
    int m, n;
    
    printf("numero de filas:");
    scanf("%d", &m);
    printf(" número de columnas:");
    scanf("%d", &n);
    
    printf("\n  |");
    for (int i = 1; i <= n; ++i) {
        printf("%4d", i);
    }
    printf("\n--+");
    for (int i = 1; i <= n; ++i) {
        printf("----");
    }
    printf("\n");
    for (int i = 1; i <= m; ++i) {
        printf("%2d|", i);
        for (int j = 1; j <= n; ++j) {
            printf("%4d", i * j);
        }
        printf("\n");
    }
    return 0;
}