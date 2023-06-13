/*
Faça um programa que, dado um vetor de números inteiros e um valor, ambos
fornecidos pelo usuário, informe a posição da primeira ocorrência desse valor no
vetor. Caso o valor informado não esteja no vetor, o computador deve informar
uma mensagem "Valor não encontrado". Primeiramente o programa deve perguntar
todos os números ao usuário, para somente então procurar pelo valor desejado.
*/

#include <stdbool.h>
#include <stdio.h>

int main(void) {
  int t, v = 0;

  puts("Digite o tamanho do vetor de inteiros.");
  scanf("%i", &t);

  int vetor[t];

  puts("Digite os valores para preencher o vetor.");

  for (int i = 0; i < t; i++) {
    printf("Digite o %i valor: ", i + 1);
    scanf("%i", &v);
    vetor[i] = v;
  }

  int v1 = 0;
  bool found = false;

  puts("Digite o valor a ser pesquisado.");
  scanf("%i", &v1);

  for (int i = 0; i < t; i++) {
    if (vetor[i] == v1) {
      printf("A posição da primeira ocorrência é: %i.\n", i);
      found = true;
      break;
    }
  }

  if (!found)
    puts("Valor não encontrado.");

  return 0;
}
