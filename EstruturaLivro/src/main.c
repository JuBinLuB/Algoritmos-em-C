#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "livros.h"

int main(void) {

    setlocale(LC_ALL, "Portuguese");

    Livro *p = (Livro *)malloc(5 * sizeof(Livro));

    setInfo(p, 5);
    printInfo(p, 5);

    free(p);
    return 0;
}