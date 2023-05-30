/*
 * Escreva um programa que leia as 50 notas de uma avaliação dos alunos que
 * cursam uma disciplina de algoritmos, calcule e imprima na tela:
 *
 * • quantidade de notas maiores ou iguais a 7;
 * • a porcentagem de notas maiores ou iguais a 7;
 * • quantidade de notas maiores ou iguais a 4 e menores que 7;
 * • a porcentagem de notas maiores ou iguais a 4 e menores que 7;
 * • quantidade de notas menores que 4;
 * • a porcentagem de notas menores que 4;
 * • a média da turma na avaliação.
 */

#include <stdio.h>
int main(void) {
  float nota, soma, media, c1, c2, c3 = 0;

  for (int i = 0; i < 50; i++) {
    puts("Digite as notas dos alunos abaixo.");
    scanf("%f", &nota);

    if (nota >= 7)
      c1++;
    if (nota >= 4 && nota < 7)
      c2++;
    if (nota < 4)
      c3++;

    soma += nota;
    if (nota == 0)
      break;
  }

  media = soma / 50;

  printf("Quantidade de notas maiores ou iguais a 7 é: %.0f.\n", c1);
  printf("Porcentagem de notas maiores ou iguais a 7 é: %.0f%%.\n",
         (c1 / 50) * 100);

  printf("Quantidade de notas >= a 4 e < 7 é: %.0f.\n", c2);
  printf("Porcentagem de notas >= 4 e < 7 é: %.0f%%.\n", (c2 / 50) * 100);

  printf("Quantidade de notas menores que 4 é: %.0f.\n", c3);
  printf("Porcentagem de notas menores que 4 é: %.0f%%.\n", (c3 / 50) * 100);

  printf("Média da turma é: %.1f.\n", media);

  return 0;
}
