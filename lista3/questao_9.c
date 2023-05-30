#include <stdio.h>

int cargo;
float salario;

int main(void) {
  printf("Digite 0 se seu cargo for programador ou 1 para outros cargos.\n");
  printf("Digite a opção para seu cargo: ");
  scanf("%d", &cargo);
  printf("Digite seu salário base em R$: ");
  scanf("%f", &salario);

  switch (cargo) {
  case 0:
    printf("Seu salário de programador terá aumento de 30%% e será de: R$%.2f",
           salario + (salario * .30));
    break;
  case 1:
    printf("Seu salário de terá aumento de 15%% e será de: R$%.2f",
           salario + (salario * .10));
    break;
  }

  return 0;
}
