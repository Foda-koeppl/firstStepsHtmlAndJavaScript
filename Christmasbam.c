
#include <stdio.h>

int main() {
    int hoehe;

    printf("Gib die Höhe des Christmasbams ein: ");
    scanf("%d", &hoehe);

    for (int i = 1; i <= hoehe; i++) {
        
        for (int j = 1; j <= hoehe - i; j++) {
            printf(" ");
        }
        
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("X");
        }
        printf("\n");
    }
 
    for (int i = 0; i < hoehe / 3; i++) {
        for (int j = 1; j <= hoehe - 1; j++) {
            printf(" ");
        }
        printf("X\n");
    }

    return 0;
}