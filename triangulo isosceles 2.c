#include <stdio.h>

int main(void) {

    int n;

    printf ("Digite o tamanho da base do triangulo: ");
    scanf ("%d", &n);

    for (int i = 0; i < n; i += 2) {
        for (int j = i; j < n; j += 2) {
            printf ("+ ");
        }

        for (int k = 0; k < i-1; k++) {
            printf ("  ");
        }

        if (i != 0) {
            printf("+ ");
        }

        for (int w = i+1; w < n; w += 2) {
            printf ("+ ");
        }
        printf ("\n");
    }

    return 0;
}