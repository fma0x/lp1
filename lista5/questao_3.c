/*
Crie um programa que imprime todos os números primos entre 1 e n, onde n é
fornecido pelo usuário.
*/

#include <stdio.h>

int main(void) {
  int n, count, i;

  puts("Digite um número n para encontrar os números primos ente 1 e n.");
  scanf("%i", &n);

  for (i = 2; i <= n; i++) {
    for (count = 2; count <= i; count++) {
      // conceito de número primo: natural maior que um e divisel apenas por um
      // e ele mesmo.↓
      if (i % count == 0 && i % 1 == 0)
        break;
    }

    if (i == count)
      printf("O número %i é primo.\n", i);
  }

  return 0;
}
