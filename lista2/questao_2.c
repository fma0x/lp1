#include <stdio.h>

float r, cd, vc;

int main(void) {
  printf("Digite um valor em R$ para conversão em $.\n");
  scanf("%f", &r);

  printf("Digite abaixo o valor da cotação de compra do dólar($) para "
         "conversão.\n");
  printf("Voçe pode encontrar as cotações em ↓\n");
  printf("https://www.bcb.gov.br/estabilidadefinanceira/fechamentodolar.\n");
  scanf("%f", &cd);
  // valor usado para teste referente ao fechamento de 20.04.2023 no valor de
  // compra de R$ 5,0491m conforme Banco Central.

  vc = r / cd;

  printf("O valor convertido de R$ em $ é: $%.2f.\n", vc);

  return 0;
}
