#include <stdio.h>

int n1;

int main(void) {
  printf("Digite um número.\n");
  scanf("%d", &n1);

  if (n1 % 2 == 0)
    printf("%d é par\n.", n1);
  else
    printf("%d é ímpar\n.", n1);

  return 0;
}
