#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct {
    
    char titulo[150];
    char autor[150];
    float preco[6];

} livro;

void dados(livro vetor[], int tam) {

    printf ("Insira os seguintes dados dos livros:\n\n");

    for (int i = 0; i < tam; i++) {
        printf ("%dº Livro...\n", i+1);
        
        printf ("Informe o titulo: ");
        fflush(stdin);
        fgets(vetor[i].titulo, 149, stdin);

        printf ("Informe o nome do autor: ");
        fflush(stdin);
        fgets(vetor[i].autor, 149, stdin);

        printf ("Informe o preco nos ultimos 6 meses:\n");
        for (int j = 0; j < 6; j++) {
            printf ("%dº mes: ", j+1);
            scanf ("%f", &vetor[i].preco[j]);
        }
        printf ("\n");
    }
}

void imprime(livro vetor[], int tam) {

    float soma[tam];

    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < 6; j++) {
            soma[i] += vetor[i].preco[j];
            soma[i] /= 6;
        }
        printf ("\nO preço médio do %dº livro é: %.2f\n", i+1, soma[i]);
    }
}

int main(void) {

    setlocale(LC_ALL,"Portuguese");
    
    livro *p = malloc(5 * sizeof(livro));

    dados(p, 5);
    imprime(p, 5);
    
    free(p);
    return 0;
}