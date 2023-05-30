#include <stdio.h>

int main(void) {

  int soma, idade = 0;
  for (int i = 0; i < 12; i++) {

    scanf("%d", &idade);
    soma += idade;
  }

  printf("%d\n", soma);
  soma = soma / 12;
  printf("%d\n", soma);

  return 0;
}
