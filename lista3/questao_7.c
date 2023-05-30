#include <stdio.h>

float peso, altura, imc;

int main(void) {
  printf("Digite seu peso em Kg: ");
  scanf("%f", &peso);

  printf("Digite sua altura (ex: 1,75): ");
  scanf("%f", &altura);

  imc = peso / altura * altura;

  if (imc > 30)
    printf("Obeso");
  else
    printf("Não obeso");

  return 0;
}
