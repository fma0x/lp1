#include <stdio.h>

float num1, num2;

int main(void) {
  printf("Digite o primeiro número abaixo.\n");
  scanf("%f", &num1);

  printf("Digite o segundo número abaixo.\n");
  scanf("%f", &num2);

  if (num1 > num2)
    printf("O maior número é %.2f\n.", num1);
  else
    printf("O maior número é %.2f\n.", num2);

  return 0;
}
