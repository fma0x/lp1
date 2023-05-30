#include <stdio.h>

int idade;
float altura;
char idiomas;

int main(void) {
  printf("Dgite sua idade: ");
  scanf("%i", &idade);
  printf("Digite sua altura: ");
  scanf("%f", &altura);
  printf("Você fala com fluência 2 ou mais idiomas? (S - Sim | N - Não) ");
  scanf("%s", &idiomas);

  if (idade >= 24 && altura >= 1.70 && idiomas == 'S') {
    puts("Você atende aos requisitos da vaga.");
  } else {
    puts("Você não atende aos requisitos da vaga.");
  }

  return 0;
}
