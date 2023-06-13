/*
Escreva um programa que leia um vetor de inteiros de 20 elementos e um inteiro
x. Em seguida deverá trocar por x todos os números do vetor menores que x. O
programa deverá imprimir o vetor resultante.
*/

#include <stdio.h>

int main(void) {
  int vetor[20] = {1,  2,  3,  4,  5,  6,  7,  8,  9,  10,
                   11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

  int x = 0;

  puts("Valores do vetor antes: ");
  for (int i = 0; i < 20; i++) {
    printf("%i ", vetor[i]);
  }

  puts(" ");

  puts("Digite um número inteiro.");
  scanf("%i", &x);

  for (int i = 0; i < 20; i++) {
    if (vetor[i] < x)
      vetor[i] = x;
  }

  puts("Valores do vetor depois: ");
  for (int i = 0; i < 20; i++) {
    printf("%i ", vetor[i]);
  }

  return 0;
}
