/* Questão: Construir um programa que conta e imprime o número de ocorrências de uma letra,
fornecida pelo usuário, em uma dada string, também digitada pelo usuário. Ou seja, peça
que o usuário digite uma frase, depois peça que ele digite uma única letra, então informe
quantas vezes essa letra aparece na frase. */

#include <ctype.h>
#include <stdio.h>

int main(void) {
  int contador = 0, i;
  char frase[100], letra;

  printf("Digite uma frase: ");
  fgets(frase, sizeof(frase), stdin);

  printf("Agora, digite uma letra: ");
  scanf(" %c", &letra);
  printf("\n");

  letra = tolower(letra);

  for (i = 0; frase[i]; i++) {
    if (tolower(frase[i]) == letra) {
      contador++;
    }
  }
  printf("A letra [%c] possui %d ocorrência(s) na frase supracitada.", letra,
         contador);
  return 0;
}
