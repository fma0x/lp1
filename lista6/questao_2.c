// Escreva um algoritmo em C mostra todos os números ímpares de 1 até 100.

#include <stdio.h>
int main(void) {
  for (int i = 1; i <= 100; i++) {
    if (i % 2 != 0)
      printf("%i\n", i);
  }

  return 0;
}
