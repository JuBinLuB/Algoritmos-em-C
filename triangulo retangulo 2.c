#include <stdio.h>

int main(void) {

    int n;

    printf ("Informe o tamanho da base do triangulo: ");
    scanf ("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            printf ("* ");
        }
        printf ("\n");
    }

    return 0;
}