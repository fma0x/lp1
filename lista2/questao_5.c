#include <stdio.h>

#define DIARIA 30.00

float vt, vdir;
int d;

int main(void) {
  printf("O valor da diaria do nosso encanador é R$ 30.00.\n");
  printf("Digite abaixo quantos dias precisará do serviço:\n");
  scanf("%d", &d);

  vt = DIARIA * d;
  vdir = vt - (vt * .08);

  printf("O valor do serviço é: R$ %.2f.\n", vt);
  printf("O valor com desconto de 8%% imposto de renda é: R$ %.2f.\n", vdir);

  return 0;
}
