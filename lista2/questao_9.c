#include <stdio.h>

float vap1, vap2, vap3, vapt, vp, p1, p2, p3, vp1, vp2, vp3;

int main(void) {
  printf("Qual o valor investido pelo primeiro apostador?\n");
  scanf("%f", &vap1);

  printf("Qual o valor investido pelo segundo apostador?\n");
  scanf("%f", &vap2);

  printf("Qual o valor investido pelo terceiro apostador?\n");
  scanf("%f", &vap3);

  // Estabelecendo o percentual de cada apostador no valor total da aposta.
  vapt = vap1 + vap2 + vap3;
  p1 = vap1 / vapt;
  p2 = vap2 / vapt;
  p3 = vap3 / vapt;

  printf("Qual o valor do prêmio?\n");
  scanf("%f", &vp);

  vp1 = vp * p1;
  vp2 = vp * p2;
  vp3 = vp * p3;

  printf("O apostador que investiu R$ %.2f receberá R$ %.2f\n", vap1, vp1);
  printf("O apostador que investiu R$ %.2f receberá R$ %.2f\n", vap2, vp2);
  printf("O apostador que investiu R$ %.2f receberá R$ %.2f\n", vap3, vp3);

  return 0;
}
