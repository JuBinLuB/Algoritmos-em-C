#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "livros.h"

void setInfo(Livro *livro, int tam) {

    printf("Insira os seguintes dados dos livros:\n\n");

    for (int i = 0; i < tam; i++) {
        printf("%dº Livro...\n", i + 1);

        printf("Informe o título: ");
        fflush(stdin);
        fgets(livro[i].titulo, 149, stdin);

        printf("Informe o nome do autor: ");
        fflush(stdin);
        fgets(livro[i].autor, 149, stdin);

        printf("\nInforme o preço nos últimos 6 meses:\n");
        for (int j = 0; j < 6; j++) {
            printf("%dº mês: ", j + 1);
            scanf("%f", &livro[i].preco[j]);
        }
        printf("\n");
    }
}

void printInfo(Livro *livro, int tam) {

    float soma = 0;

    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < 6; j++) {
            soma += livro[i].preco[j];
        }
        printf("O preço médio do %dº livro é: %.2f\n", i + 1, soma / 6.0);
        soma = 0;
    }
}
