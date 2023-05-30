#include <stdio.h>

float salario;

int main(void) {
  printf("Digite seu salário base (R$): ");
  scanf("%f", &salario);

  if (salario <= 999.00)
    printf("Sem desconto de IR. Salário líquido de R$ %.2f\n ", salario);
  else if (salario > 999.00 && salario <= 1499.00)
    printf("Desconto de 15%% IR. Salário líquido de R$ %.2f\n ",
           salario - (salario * 0.15));
  else
    printf("Desconto de 27%% IR. Salário líquido de R$ %.2f\n ",
           salario - (salario * 0.27));

  return 0;
}
