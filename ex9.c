//Questão: Gere uma matriz 10 x 10 e escreva a localização (linha e a coluna) do maior valor.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(0));
  int matriz[10][10], i, j, maior = 0, menor = 100, l_maior, l_menor, c_maior,
                            c_menor;
  for (i = 0; i < 10; i++) {
    for (j = 0; j < 10; j++) {
      matriz[i][j] = rand() % 100;
      printf("%d ", matriz[i][j]);
      if (matriz[i][j] >= maior) {
        maior = matriz[i][j];
        l_maior = i;
        c_maior = j;
      }
      if (matriz[i][j] <= menor) {
        menor = matriz[i][j];
        l_menor = i;
        c_menor = j;
      }
    }
    printf("\n");
  }
  printf("\n");
  printf("O maior valor é %d, na posição [%d][%d].\n", maior, l_maior, c_maior);
  printf("O menor valor é %d, na posição [%d][%d].", menor, l_menor, c_menor);
  return 0;
}
