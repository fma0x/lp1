#include <stdio.h>

int main(void) {
  int valor, n100, n50, n10, n5, n1, conv;

  printf("Digite o valor em R$ para calcular o número de notas: ");
  scanf("%i", &valor);

  n100 = valor / 100;
  conv = valor % 100;
  n50 = conv / 50;
  conv = conv % 50;
  n10 = conv / 10;
  n5 = conv / 5;
  n1 = conv % 10;

  printf("Notas de R$ 100 = %i\n", n100);
  printf("Notas de R$ 50 = %i\n", n50);
  printf("Notas de R$ 10 = %i\n", n10);
  printf("Notas de R$ 5 = %i\n", n5);
  printf("Notas de R$ 1 = %i\n", n1);
}
