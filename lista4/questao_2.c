#include <stdio.h>

int idade;
float peso;

int main(void) {
  printf("Dgite sua idade: ");
  scanf("%i", &idade);
  printf("Digite seu peso: ");
  scanf("%f", &peso);

  if ((idade >= 18 && idade <= 65) && peso >= 50) {
    puts("Você pode doar sangue.");
  } else {
    puts("Você não pode doar sangue.");
  }

  return 0;
}
