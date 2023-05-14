#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimirTransposta(int tam, int m[tam][tam]) {

  int di, dj;

  printf ("\n");
  printf ("Matriz Transposta:\n\n");

  for (dj = 0; dj < tam; ++dj) {
    for (di = 0; di < tam; ++di) {
      printf ("%d ", m[di][dj]);
    }
    printf ("\n");
  }
}

int main(void) {

  int tamanho;
  
  printf ("Diga o tamanho da Matriz quadrada: ");
  scanf ("%d", &tamanho);

  int matriz[tamanho][tamanho];

  // printf ("\nInsira os valores da Matriz:\n");

  // for (int i = 0; i < tamanho; i++) {
  //   for (int j = 0; j < tamanho; j++) {
  //     printf ("%d Linha - %d Coluna: ", i+1, j+1);
  //     scanf ("%d", &matriz[i][j]);
  //   }
  //   printf ("\n");
  // }

  srand(time(NULL));

  printf ("\nMatriz gerada:\n\n");

  for (int i = 0; i < tamanho; ++i) {
    for (int j = 0; j < tamanho; ++j) {
      matriz[i][j] = rand() % 10; 
      printf ("%d ", matriz[i][j]);
    }
    printf ("\n");
  }

  imprimirTransposta(tamanho, matriz);

  return 0;
}