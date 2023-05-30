#include <stdio.h>

#define PREMIO 780000

double vp1, vp2, vp3;

int main(void) {
  printf("O valor de R$ 780.000,00 será dividido conforme abaixo:\n");

  vp1 = (PREMIO * 0.46);
  vp2 = (PREMIO * 0.32);
  vp3 = (PREMIO * 0.22);

  printf("O valor do primeiro ganhador é: R$ %.2f.\n", vp1);
  printf("O valor do segundo ganhador é: R$ %.2f.\n", vp2);
  printf("O valor do terceiro ganhador é: R$ %.2f.\n", vp3);

  return 0;
}
