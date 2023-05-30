/*
Escreva um programa que leia a nota final um número determinada de alunos, e
escreva na tela a situação vde cada um. “APROVADO” se NF >= 7; “EM EXAME” se 4
<= NF < 7; “REPROVADO” se NF < 4. O programa deve ser encerrado se for digitada
uma nota final fora do intervalo entre 0 e 10.
*/

#include <stdio.h>

int main(void) {
  float notas;
  int qta = 0;
  puts("Digita abaixo a quantidade de notas finais que serão avaliadas.");
  scanf("%i", &qta);
  float n[qta - 1];

  puts("Insira abaixo as notas finais que serão avaliadas.");
  for (int i = 0; i <= qta - 1; i++) {
    int n1;
    scanf("%f", &notas);
    n[i] = notas;
  }

  for (int i = 0; i <= qta - 1; i++) {
    if (n[i] >= 7)
      printf("Aluno com nota %.2f aprovado.\n", n[i]);
    if (n[i] >= 4 && n[i] < 7)
      printf("Aluno com nota %.2f em exame.\n", n[i]);
    if (n[i] < 4)
      printf("Aluno com nota %.2f reprovado.\n", n[i]);
  }

  return 0;
}
