/*
Desenvolva um programa que preencha um vetor de números inteiros e que ao final
imprima apenas os números pares desse vetor.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int t = rand() % 40 + 1;
  int vetor[t];

  for (int i = 0; i < t; i++) {
    vetor[i] = rand() % 100 + 1;
  }

  for (int i = 0; i < t; i++) {
    if (vetor[i] % 2 == 0)
      printf("%i\n", vetor[i]);
  }

  return 0;
}
