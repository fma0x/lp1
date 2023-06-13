/*
Faça um programa que leia dois vetores (A e B) de 50 posições de números reais.
O programa deve, então, dividir todos os elementos de A pelo menor elemento de B
e armazenar em A.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  float vetor1[50];
  float vetor2[50];
  int i = 0;

  while (i < 50) {
    vetor1[i] = (float)rand() / (float)(RAND_MAX / 100.00);
    vetor2[i] = (float)rand() / (float)(RAND_MAX / 100.00);
    i++;
  }

  for (int i = 1; i < 50; i++) {
    if (vetor2[0] > vetor2[i])
      vetor2[0] = vetor2[i];
  }

  /*for (int i = 0; i < 50; i++) {*/
  /*printf("%.2f.\n", vetor2[i]);*/
  /*}*/
  // printf("menor valor é: %.2f.\n", vetor2[0]);
  // printf("%.2f\t%.2f\t%.2f\n", vetor1[0], vetor1[1], vetor1[2]);

  for (int i = 0; i < 50; i++) {
    vetor1[i] = vetor1[i] / vetor2[0];
  }

  puts("Alguns valores divididos");
  printf("%.2f\t%.2f\t%.2f", vetor1[0], vetor1[1], vetor1[2]);

  return 0;
}
