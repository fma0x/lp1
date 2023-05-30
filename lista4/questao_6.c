/*Se o salário for menor que R$ 500,00 então o reajuste é de 15%*/
/*Se o salário estiver entre R$ 500,00 e R$ 1.000,00 então o reajuste é de 8%*/
/*Se o salário for superior R$ 1.000,00 então o reajuste é de 3%*/

#include <stdio.h>

float salario;

int main(void) {
  puts("Digite o valor do salário em R$: ");
  scanf("%f", &salario);

  if (salario < 500.00) {
    salario = salario + (salario * 0.15);
    printf("Salário com reajuste de 15%%: R$ %.2f.", salario);
  } else if (salario >= 500.00 && salario <= 1000.00) {
    salario = salario + (salario * 0.08);
    printf("Salário com reajuste de 8%%: R$ %.2f.", salario);
  } else {
    salario = salario + (salario * 0.03);
    printf("Salário com reajuste de 3%%: R$ %.2f.", salario);
  }

  return 0;
}
