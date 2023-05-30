#include <stdio.h>

float p, c;

int main(void) {
  printf("Digite um valor em polegadas para conversão em centímetros.\n");
  scanf("%f", &p);

  c = p * 2.54;

  printf("O valor convertido em centímetros é: %.2fcm.\n", c);

  return 0;
}
