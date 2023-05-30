// Escreva um programa em C que solicita 10 números ao usuário, através de um
// laço while, e ao final mostre qual destes números é o maior.

#include <stdio.h>

int main(void) {
  float n[10];
  int i = 0;
  puts(
      "Insira uma sequência de 10 números inteiros e descubra qual é o maior.");

  while (i <= 9) {
    float n1;
    scanf("%f", &n1);
    n[i] = n1;
    i++;
  }

  for (int i = 1; i < 10; i++) {
    if (n[0] < n[i])
      n[0] = n[i];
  }

  printf("O maior número do intervalo dado é: %.2f\n.", n[0]);

  return 0;
}
