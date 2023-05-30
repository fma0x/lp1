#include <stdio.h>

int main(void) {
  float cf, imp, pd, cc;
  printf("Digite o valor do custo de fabricação do carro em R$: ");
  scanf("%f", &cf);

  // Impostos
  imp = cf * 0.45;
  // percentagem distribuidor
  pd = cf * 0.28;
  // Custo ao consumidor
  cc = cf + pd + imp;

  printf("O custo ao consumidor é: R$ %.2f.", cc);

  return 0;
}
