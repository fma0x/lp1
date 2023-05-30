/*Faça um programa que solicite dois números inteiros positivos e exiba os
múltiplos de 7 existentes entre estes números. Para solucionar esse problema
utilize a estrutura for em linguagem C.*/

#include <stdio.h>

int main(void) {
  int n1, n2;

  puts("Digite um intervalo para encontrar os multiplos de 7.");
  puts("Atenção: n1 deve ser menor que n2.");

  puts("Digite o primeiro número(n1): ");
  scanf("%i", &n1);
  puts("Digite o segundo número(n2): ");
  scanf("%i", &n2);

  for (int i = n1; i <= n2; i++) {
    if (i % 7 == 0)
      printf("O número %i é múltiplo de 7.\n", i);
  }

  return 0;
}
