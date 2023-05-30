/*

Escreva um programa que lê o tamanho do lado de um quadrado e imprime um
quadrado daquele tamanho com asteriscos e espaços em branco. Seu programa deve
funcionar para quadrados com lados de todos os tamanhos entre 1 e 20. Para lado
igual a 5:

* * * * *
*       *
*       *
*       *
* * * * *

*/

#include <stdio.h>

int main() {
  int n = 0;

  puts("Digite o número de lados para o quadrado: ");
  scanf("%d", &n);
  for (int l = 1; l <= n && n <= 20; l++) {
    for (int c = 1; c <= n; c++) {
      // define * para a primeira e última linha, bem como para primeira e
      // última coluna.
      if (l == 1 || c == 1 || l == n || c == n)
        printf("* ");
      else
        // define " " como 'preenchimento' do quadrado.
        printf("  ");
    }

    printf("\n");
  }

  return 0;
}
