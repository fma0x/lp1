#include <stdio.h>

#define HORA_S 3600
#define MINUTO_S 60

int main(void) {
  // float h, m, s;
  // int hint, mint;

  // printf("Digite em segundos o tempo de aquecimento: ");
  // scanf("%f", &s);

  // h = s / 3600;
  // hint = (int)h;
  // m = (h - hint) * 60;
  // mint = (int)m;
  // s = (m - mint) * 60;

  // printf("O tempo de aquecimento é de: %ih:%im:%.0fs.", hint, mint, s);

  // Resultado: O tempo de aquecimento é de: 3h:40m:30s.

  int segundos_aq, horas, minutos, segundos, conv;

  printf("Digite em segundos o tempo de aquecimento: ");
  scanf("%d", &segundos_aq);

  horas = segundos_aq / HORA_S;
  conv = segundos_aq % HORA_S;
  minutos = conv / MINUTO_S;
  segundos = conv % MINUTO_S;

  printf("O tempo de aquecimento é %dh:%dm:%ds\n", horas, minutos, segundos);
}
