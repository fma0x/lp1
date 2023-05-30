#include <stdio.h>

float vp, vpd;

int main(void) {
  printf("Digite um valor do produto em R$ para obter o desconto de 12%%.\n");
  scanf("%f", &vp);

  vpd = vp - (vp * 0.12);

  printf("O valor do produto com desconto é: R$ %.2f.\n", vpd);

  return 0;
}
