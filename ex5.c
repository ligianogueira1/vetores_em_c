/* Questão: Faça um programa gerar duas matrizes A e B, cada uma com duas linhas e três colunas.
Construir uma matriz C de mesma dimensão, onde C é formada pela soma dos elementos
(números inteiros) da matriz A com os elementos (números inteiros) da matriz B. Ao final
apresentar os valores da matriz C. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(0));
  int A[2][3], B[2][3], C[2][3], i, j;
  printf("\n");
  for (i = 0; i < 2; i++) {
    if (i == 1) {
      printf("\n");
    }
    for (j = 0; j < 3; j++) {
      A[i][j] = rand() % 100;
      printf("%d ", A[i][j]);
    }
  }
  printf("\n");
  for (i = 0; i < 2; i++) {
    printf("\n");
    for (j = 0; j < 3; j++) {
      B[i][j] = rand() % 100;
      printf("%d ", B[i][j]);
    }
  }
  printf("\n");
  for (i = 0; i < 2; i++) {
    printf("\n");
    for (j = 0; j < 3; j++) {
      C[i][j] = A[i][j] + B[i][j];
      printf("%d ", C[i][j]);
    }
  }
  return 0;
}
