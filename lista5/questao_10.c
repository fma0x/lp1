/*
Faça um programa que leia 10 valores, um de cada vez, e conte quantos são
positivos, mostrando o resultado da contagem ao final.
*/

#include <stdio.h>

int main(void) {
  float n[10];
  int count = 0;
  puts("Insira uma sequência de 10 números (positivos ou negativos).");
  for (int i = 0; i <= 9; i++) {
    int n1;
    scanf("%i", &n1);
    n[i] = n1;
  }

  for (int i = 0; i <= 9; i++) {
    if (n[i] > 0)
      count++;
  }

  printf("A quantidade de números positivos é: %i\n.", count);

  return 0;
}
