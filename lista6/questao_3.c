// Crie um algoritmo em C mostra todos os números pares de 1 até 100.

#include <stdio.h>
int main(void) {
  for (int i = 1; i <= 100; i++) {
    if (i % 2 == 0)
      printf("%i\n", i);
  }

  return 0;
}
