/*
Escreva um programa que pergunte ao usuário quantos alunos tem na sala dele. Em
seguida, através de um laço while, pede ao usuário para que entre com as notas
de todos os alunos da sala, um por vez. Por fim, o programa mostra a média
aritmética da turma.
*/

#include <stdio.h>
int main(void) {
  int qtalunos = 0, count = 1;
  float notas, soma = 0;

  puts("Digite a quantidade de alunos:");
  scanf("%i", &qtalunos);

  while (count <= qtalunos) {
    printf("Digite a nota do(a) %i aluno(a): ", count);
    scanf("%f", &notas);
    soma += notas;
    count++;
  }

  printf("A média aritmética da turma é: %.2f.", soma / qtalunos);

  return 0;
}
