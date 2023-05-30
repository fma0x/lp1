/*Até 5 Kg 60g*/
/*6 – 10 Kg 95g*/
/*11 – 15 Kg 135g*/
/*16 – 20 Kg 170g*/
/*Acima de 21 Kg 215g*/

#include <stdio.h>

float peso_c, peso_emb;
int dias;

int main(void) {
  puts("Digite o peso do cachorro em kg: ");
  scanf("%f", &peso_c);
  puts("Digite o peso da embalagem da ração em kg: ");
  scanf("%f", &peso_emb);

  if (peso_c <= 5) {
    dias = peso_emb / 0.06;
    printf("A razão dará para %d dias.\n", dias);
  } else if (peso_c >= 6 && peso_c <= 10) {
    dias = peso_emb / 0.095;
    printf("A razão dará para %d dias.\n", dias);
  } else if (peso_c >= 11 && peso_c <= 15) {
    dias = peso_emb / 0.135;
    printf("A razão dará para %d dias.\n", dias);
  } else if (peso_c >= 16 && peso_c <= 20) {
    dias = peso_emb / 0.170;
    printf("A razão dará para %d dias.\n", dias);
  } else {
    dias = peso_emb / 0.215;
    printf("A razão dará para %d dias.\n", dias);
  }

  return 0;
}
