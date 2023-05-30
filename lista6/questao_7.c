// Escreva um programa em C que solicita 10 números ao usuário, através de um
// laço while, e ao final mostre os dois maiores números digitados pelo usuário.

#include <stdio.h>

int main(void) {
  float n[10], k = 0;
  int i, j = 0;
  puts("Insira uma sequência de 10 números e descubra os dois maiores.");

  while (i <= 9) {
    float n1;
    scanf("%f", &n1);
    n[i] = n1;
    i++;
  }

  // ordernando o array de forma decrescente.
  for (i = 0; i < 10; i++) {
    for (j = i + 1; j < 10; j++) {
      if (n[i] < n[j]) {
        k = n[i];
        n[i] = n[j];
        n[j] = k;
      }
    }
  }

  printf("Os dois maiores números do intervalo dado sáo: %.2f e %.2f\n.", n[0],
         n[1]);

  return 0;
}
