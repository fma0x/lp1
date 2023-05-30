#include <stdio.h>

int n1, n2;

int main(void) {
  printf("Digite o primeira número.\n");
  scanf("%d", &n1);

  printf("Digite o segunda número.\n");
  scanf("%d", &n2);

  if (n1 % n2 == 0)
    printf("%d é divisor perfeito de %d\n.", n2, n1);
  else
    printf("%d não é divisor perfeito de %d\n.", n2, n1);

  return 0;
}
