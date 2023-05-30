#include <stdio.h>

int ald, alt, qds;

int main(void) {
  printf("Qual a altura do degrau da escada (em centímetros)?\n");
  scanf("%d", &ald);

  printf("Qual a altura você deseja subir com essa escada (em metros)?\n");
  scanf("%d", &alt);

  alt = alt * 100;
  qds = alt / ald;

  printf("Você deve subir cerca de %d degraus.\n", qds);

  return 0;
}
