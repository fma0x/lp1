/*
Professores preocupados com o número de faltas de seus alunos resolveram pedir
para que esses alunos escrevessem um programa para calcular a média de faltas
dos alunos de uma determinada turma de 30 alunos. Imagine que você é um aluno
dessa turma e tem como tarefa escrever tal programa. Esse programa deve ler a
quantidade de faltas dos alunos dessa turma (permitir a leitura enquanto for
digitado um número positivo para a quantidade de faltas). Ao final imprimir a
quantidade média de faltas e o número de alunos que participaram dessa pesquisa.
*/

#include <stdio.h>
int main(void) {
  float faltas, soma, count;

  puts("Insira as falta por aluno abaixo. Digite 0 para finalizar.");
  for (;;) {
    scanf("%f", &faltas);
    soma += faltas;
    count++;

    if (faltas == 0) {
      count--;
      break;
    }

    // como a turma informada tem 30 alunos.
    if (count == 30) {
      break;
    }
  }

  printf("Quantidade média de faltas: %.0f.\n", soma / count);
  printf("Quantidade de alunos que participaram: %.0f.\n", count);
  return 0;
}
