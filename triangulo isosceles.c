#include <stdio.h>

int main(void) {

    int n;

    printf ("Informe o tamanho da base do triangulo: ");
    scanf ("%d", &n);

    for (int i = 0; i < n; i += 2) {
        for (int j = i+1; j < n; ++j) {
            printf (" ");
        }

        for (int k = 0; k <= i; k++) {
            printf ("* ");
        }
        printf ("\n");
    }

    return 0;
}