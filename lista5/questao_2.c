/*
Construa um programa que leia 10 valores, um de cada vez, e apresente o maior
deles ao final.
*/

#include <stdio.h>

int main(void) {
  int n[10];
  puts(
      "Insira uma sequência de 10 números inteiros e descubra qual é o maior.");
  for (int i = 0; i <= 9; i++) {
    int n1;
    scanf("%i", &n1);
    n[i] = n1;
  }

  for (int i = 1; i < 10; i++) {
    if (n[0] < n[i])
      n[0] = n[i];
  }

  printf("O maior número do intervalo dado é: %i\n.", n[0]);

  return 0;
}
