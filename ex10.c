//Questão: Gere uma matriz 10 x 10 e exiba a soma dos valores de cada linha.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(0));
  int matriz[10][10], i, j, soma = 0;

  for (i = 0; i < 10; i++) {
    for (j = 0; j < 10; j++) {
      matriz[i][j] = rand() % 100;
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  for (i = 0; i < 10; i++) {
    soma = 0;
    for (int j = 0; j < 10; j++) {
      soma += matriz[i][j];
    }
    printf("Soma da linha %d: %d\n", i + 1, soma);
  }
  return 0;
}
