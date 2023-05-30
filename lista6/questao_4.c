// Construa um algoritmo em C que recebe inteiro e mostra os números pares e
// ímpares (separados), de 1 até esse inteiro.

#include <stdio.h>
int main(void) {
  int n = 1;
  puts("Digite um número inteiro.");
  scanf("%i", &n);

  puts("Números pares:");
  for (int i = 1; i <= n; i++) {
    if (i % 2 == 0)
      printf("%i \n", i);
  }

  puts("Números ímpares:");
  for (int i = 1; i <= n; i++) {
    if (i % 2 != 0)
      printf("%i \n", i);
  }

  return 0;
}
