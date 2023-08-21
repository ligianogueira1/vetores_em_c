#include <stdio.h>

int main(void) {
  int i, j, k, P[10], V[10], S[10], soma;

  printf("P = ");
  k = 0;
  for (i = 2; i < 20 + 1; i++) {
    if (i % 2 == 0) {
      P[k] = i;
      printf("%d ", P[k]);
      k++;
    }
  }
  printf("\n");

  printf("V = ");
  for (j = 0; j < 10; j++) {
    V[j] = j + 10;
    printf("%d ", V[j]);
  }

  printf("\n");
  printf("S = ");
  for (k = 0; k < 10; k++) {
    S[k] = P[k] + V[k];
    printf("%d ", S[k]);
  }
  return 0;
}
