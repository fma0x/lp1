#include <stdio.h>

float dias, meses, anos;
int anosint, mesesint, diasint;

int main(void) {
  printf("Digite sua idade em dias: ");
  scanf("%f", &dias);

  anos = dias / 365;
  anosint = (int)anos;
  meses = (anos - anosint) * 12;
  mesesint = (int)meses;
  dias = (anos - anosint) * 30;
  diasint = (int)dias;

  printf("Sua idade é de: %d anos, %d meses e %d dias.", anosint, mesesint,
         diasint);

  return 0;
}
