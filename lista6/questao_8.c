/*
Escreva um programa que lê o tamanho do lado de um quadrado e imprime um
quadrado daquele amanho com asteriscos. Seu programa deve funcionar para
quadrados com lados de todos os tamanhos entre 1 e 20. Para lado igual a 5:
*****
*****
*****    (Formato de retângulo)
*****
*****

*/

#include <stdio.h>

int main() {
  int n = 0;

  puts("Digite o número de lados para o quadrado:");
  scanf("%d", &n);

  for (int l = 1; l <= n && n <= 20; l++) {
    for (int c = 1; c <= n; c++) {
      printf("* "); // inserido espaço para dar uma forma de quadrado.
    }
    printf("\n");
  }

  return 0;
}
