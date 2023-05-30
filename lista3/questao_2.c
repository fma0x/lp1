#include <stdio.h>

float temp;

int main(void) {
  printf("Digite sua temperatura abaixo.\n");
  scanf("%f", &temp);

  if (temp > 37)
    printf("Você está com febre .");
  else
    printf("Sua temperatura está normal.");

  return 0;
}
