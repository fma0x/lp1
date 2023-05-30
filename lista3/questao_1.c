#include <stdio.h>

int id;

int main(void) {
  printf("Você pode solicitar sua CNH? Digite sua idade abaixo para saber.\n");
  scanf("%d", &id);

  if (id >= 18)
    printf("Sim, você pode solicitar sua CNH 👍.");
  else
    printf("Não meu jovem. Espere até ter 18 anos 😁.");

  return 0;
}
