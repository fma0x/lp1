/*
A Polícia Federal está desconfiada que o dado de um cassino é viciado. Escreva
um programa que efetue 50 lançamentos deste dado e armazene-os em um vetor, em
seguida determine o número de ocorrências de cada face do dado. Seu programa
deverá também dizer qual a face que mais ocorreu e a face que menos ocorreu e o
valor das ocorrências.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));

  int l_dados[50];
  int l1, l2, l3, l4, l5, l6 = 0;

  for (int i = 0; i < 50; i++) {
    l_dados[i] = rand() % 6 + 1;
  }

  for (int i = 0; i < 50; i++) {
    if (l_dados[i] == 1)
      l1++;
    if (l_dados[i] == 2)
      l2++;
    if (l_dados[i] == 3)
      l3++;
    if (l_dados[i] == 4)
      l4++;
    if (l_dados[i] == 5)
      l5++;
    if (l_dados[i] == 6)
      l6++;

    // printf("%i\n", l_dados[i]);
  }

  int faces[6] = {l1, l2, l3, l4, l5, l6};

  for (int i = 0; i < 6; i++) {
    printf("%i\n", faces[i]);
  }

  printf("Ocorrência de cada face(F):\n");
  printf("F1: %i\tF2: %i\tF3: %i\tF4: %i\tF5: %i\tF6: %i.\n", l1, l2, l3, l4,
         l5, l6);

  return 0;
}
