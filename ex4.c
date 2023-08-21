/*Questão: Faça um programa para preencher um vetor com oito números inteiros e depois solicitar
um número inteiro qualquer do teclado. O programa deve pesquisar se esse número existe
no vetor: se existir, imprimir em qual posição do vetor se encontra esse número digitado.
Se não existir, imprimir uma mensagem que o número não existe no vetor.*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int N, i, V[8], posicao, cont = 0;
  printf("Digite um número: ");
  scanf("%d", &N);
  printf("V = ");
  for (i = 0; i < 8; i++) {
    V[i] = rand() % 100;
    printf("%d ", V[i]);
    if (V[i] == N) {
      posicao = i;
      cont++;
    }
  }
  printf("\n");
  if (cont > 0) {
    printf("%d está na posição %d do vetor.", N, posicao);
  } else {
    printf("%d não está contido no vetor.", N);
  }
  return 0;
}
