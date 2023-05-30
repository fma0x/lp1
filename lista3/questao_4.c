/*Faça um programa que leia 2 provas (peso 3 cada uma) e um trabalho (peso 1).
 * Caso a*/
/*média final seja maior ou igual a 7 imprimir a mensagem “aprovado”, caso
 * contrário,*/
/*imprimir a mensagem “reprovado”.*/

#include <stdio.h>

float nota1, nota2, trab, mediap;

int main(void) {
  printf("Digite nota da primeira prova.\n");
  scanf("%f", &nota1);

  printf("Digite nota da segunda prova.\n");
  scanf("%f", &nota2);

  printf("Digite nota do trabalho.\n");
  scanf("%f", &trab);

  // Mp = [(N1 x P1) + (N2 x P2) + (N3 x P3) + ... (Nx x Px)] ÷ (P1 + P2 + P3 +
  // ... Px).
  mediap = ((nota1 * 3) + (nota2 * 3) + trab) / 7;

  if (mediap >= 7)
    printf("Aprovado.");
  else
    printf("Reprovado.");

  return 0;
}
