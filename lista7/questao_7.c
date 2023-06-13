/*
Escrever um programa que leia o limite dos 2000 clientes de um banco e aumente o
limite de todos os clientes que possuam o limite atual maior do que R$1.000,00
em 20% do valor limite atual. Ao final, exibir os limites de todos os clientes
atualizados e o número de clientes que receberam este acréscimo no limite.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));

  float sd_clientes[2000];
  int count = 0;

  for (int i = 0; i < 2000; i++) {
    sd_clientes[i] = (float)rand() / (float)(RAND_MAX / 10000.00);
  }

  // printf("%f\n", sd_clientes[45]);

  for (int i = 0; i < 2000; i++) {
    if (sd_clientes[i] > 1000.00) {
      sd_clientes[i] = sd_clientes[i] + (sd_clientes[i] * 0.2);
      count++;
      printf("Limite do cliente %i atualizado para R$ %.2f.\n", i,
             sd_clientes[i]);
    }
  }

  // printf("%f\n", sd_clientes[45]);
  printf("Quantidade de limites alterados: %i\n", count);

  return 0;
}
