#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char origen[]="Origen";
    char destino[7];
    strcpy(destino, origen);
    printf("destino: %s", destino);
    
    return 0;
}