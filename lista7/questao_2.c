/*
Implemente um programa que declare e preencha um vetor de números reais e o
número de elementos a considerar (n). Esse programa deve ao final imprimir o
maior número entre os n primeiros elementos do vetor.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int q = rand() % 40 + 1; // número aleatório para tamanho do array.
  float n[q];
  int i = 0;

  // srand(0);

  // preenchendo o vetor.
  while (i <= q) {
    // inserindo números aletários.
    n[i] = (float)rand() / (float)(RAND_MAX / 100.00);
    i++;
  }

  /*for (int i = 0; i < q; i++) {*/
  /*printf("%.2f\n", n[i]);*/
  /*}*/

  for (int i = 1; i < q; i++) {
    if (n[0] < n[i])
      n[0] = n[i];
  }

  printf("O maior número do vetor é: %.2f\n.", n[0]);

  return 0;
}
