#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void tap(int i, int m[i][i]) {

  int di, dj;

  printf ("\n");
  printf ("Matriz Transposta:\n\n");

  for (dj = 0; dj < i; ++dj) {
    for (di = 0; di < i; ++di) {
      printf ("%d ", m[di][dj]);
    }
    printf ("\n");
  }
}

int main(void) {

  int x;
  
  printf ("Diga o tamanho da Matriz quadrada: ");
  scanf ("%d", &x);

  int mat[x][x];

  /*printf ("\nInsira os valores da Matriz:\n");
  for (int i = 0; i < x; ++i) {
    for (int j = 0; j < x; ++j) {
      printf ("%dº Linha - %dº Coluna: ", i+1, j+1);
      scanf ("%d", &mat[i][j]);
    }
    printf ("\n");
  }*/

  srand(time(NULL));

  printf ("\nMatriz gerada:\n\n");
  for (int i = 0; i < x; ++i) {
    for (int j = 0; j < x; ++j) {
      mat[i][j] = rand() % 10; 
      printf ("%d ", mat[i][j]);
    }
    printf ("\n");
  }

  tap(x, mat);

  return 0;
}