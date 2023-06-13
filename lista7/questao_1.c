/*
Implemente um programa que declare e preencha um vetor de números inteiros. Esse
programa deve ao final varrer o vetor e a imprimir apenas o maior número do
vetor.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n[10];
  int i = 0;

  // preenchendo o vetor.
  while (i <= 9) {
    // inserindo números aletários entre 1 e 100.
    n[i] = rand() % 100 + 1;
    i++;
  }

  for (int i = 1; i < 10; i++) {
    printf("%i\n", n[i]);
  }

  for (int i = 1; i < 10; i++) {
    if (n[0] < n[i])
      n[0] = n[i];
  }

  printf("O maior número do vetor é: %i\n.", n[0]);

  return 0;
}
