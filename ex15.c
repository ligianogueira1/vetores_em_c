// Faça um programa que leia dez nomes, e exiba o maior e menor, considerando a ordem alfabética dos nomes.

#include <stdio.h>
#include <string.h>

int main(void) {
  int i;
  char nome[100], maior[100], menor[100];

  strcpy(maior, "");
  strcpy(menor, "");

  for (i = 0; i < 3; i++) {
    printf("Digite um nome: ");
    fgets(nome, sizeof(nome), stdin);

    nome[strcspn(nome, "\n")] = '\0';

    if (strcmp(nome, maior) > 0) {
      strcpy(maior, nome);
    }
    if (strcmp(nome, menor) < 0 || i == 0) {
      strcpy(menor, nome);
    }
  }
  printf("Maior nome: %s\n", maior);
  printf("Menor nome: %s\n", menor);
  return 0;
}
