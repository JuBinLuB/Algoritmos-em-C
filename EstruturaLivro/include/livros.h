#ifndef LIVROS_H_INCLUDED
#define LIVROS_H_INCLUDED

typedef struct Livro_est{
    char titulo[100];
    char autor[100];
    float preco[6];
} Livro;

void setInfo(Livro *livro, int tam);

void printInfo(Livro *livro, int tam);

#endif // LIVROS_H_INCLUDED