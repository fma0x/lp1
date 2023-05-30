// Escreva um programa que pergunta um número ao usuário e mostra sua tabuada
// completa (de 1 até 10).

#include <stdio.h>
int main(void) {
  float count = 1;
  int n = 0;

  puts("Digite um número entre 1 e 10 para ver sua tabuada completa:");
  scanf("%d", &n);

  puts(" ");

  while (count <= 10) {
    printf("%.0f + %d = %.0f\t", count, n, n + count);

    printf("%.0f - %d = %.0f\t", count, n, count - n);

    printf("%.0f x %d = %.0f\t", count, n, n * count);

    printf("%.0f / %d = %.1f\n", count, n, count / n);
    count++;
  }

  return 0;
}
