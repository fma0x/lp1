#include <stdio.h>

float vp, vcd, vvp, vcv, vcp;

int main(void) {
  printf("Digite abaixo o valor do produto.\n");
  scanf("%f", &vp);

  // aolicando desconto de 10% no produto. Assume-se que a compra seja à
  // vista.
  vcd = vp - (vp * 0.10);
  // valor da parcela em 3x sem juros.
  vvp = vp / 3;
  // comissão de 5% sobre valor com desconto
  vcv = vcd * 0.05;
  // comissão de 5% venda à prazo.
  vcp = vp * 0.05;

  printf("O valor a pagar com desconto de 10%% : R$ %.2f.\n", vcd);
  printf("O valor da parcela para compra em 3x sem juros: R$ %.2f.\n", vvp);
  printf("Valor da comissão (5%%) sobre venda à vista: R$ %.2f.\n", vcv);
  printf("Valor da comissão (5%%) sobre venda à prazo: R$ %.2f.\n", vcp);

  return 0;
}
