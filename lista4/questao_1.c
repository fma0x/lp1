#include <stdio.h>
#include <unistd.h>

int main(void) {
  char resp1, resp2, resp3;

  printf("Pense em um número inteiro entre 1 a 4:\n");
  sleep(2);

  printf("O número é maior que 2? S - Sim | N - Não.\n");
  scanf("%s", &resp1);

  if (resp1 == 'S') {
    printf("O número é maior que 3? S - Sim | N - Não.\n");
    scanf("%s", &resp2);
    if (resp2 == 'S') {
      puts("O número é 4.");
    } else if (resp2 == 'N') {
      puts("O número é 3.");
    }
  }

  if (resp1 == 'N') {
    printf("O número é menor que 2? S - Sim | N - Não.\n");
    scanf("%s", &resp3);
    if (resp3 == 'S') {
      puts("O número é 1.");
    } else {
      puts("O número é 2.");
    }
  }
}
