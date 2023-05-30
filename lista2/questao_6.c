#include <stdio.h>

float sb, sbg, sbd;

int main(void) {
  printf("Digite abaixo o salário base do funcionário.\n");
  scanf("%f", &sb);

  sbg = sb + (sb * 0.05);
  printf("Salário com acrescimo da gratificação de 5%% é: R$ %.2f.\n", sbg);

  sbd = sbg - (sbg * 0.07);
  printf("O valor do salário base com desconto de 7%% de imposto: R$ %.2f.\n",
         sbd);

  return 0;
}
