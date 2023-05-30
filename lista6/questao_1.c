/*
Existe uma música famosa que tem o seguinte formato:
n patinhos foram passear
Além das montanhas
Para brincar
A mamãe gritou: Quá, quá, quá, quá
Mas só n-1 patinhos voltaram de lá.
Que se repete até nenhum patinho voltar de lá.
Ao final, todos os patinhos voltam:
A mamãe patinha foi procurar
Além das montanhas
Na beira do mar
A mamãe gritou: Quá, quá, quá, quá
E os n patinhos voltaram de lá.

Crie um programa em C que recebe um inteiro positivo do usuário e exibe a música
inteira na tela, onde o inteiro recebido representa o número inicial n de
patinhos que foram passear.
*/

// #include <stdio.h>
//
// int main(void) {
//
//   int n = 0;
//   puts("Digite o número de patinho:");
//   scanf("%i", &n);
//
//   printf("%i patinhos foram passear\n"
//          "Além das montanhas\n"
//          "Para brincar\n"
//          "A mamãe gritou: Quá, quá, quá, quá\n"
//          "Mas só %i patinhos voltaram de lá.\n"
//          "Que se repete até nenhum patinho voltar de lá.\n"
//          "Ao final, todos os patinhos voltam:\n"
//          "A mamãe patinha foi procurar\n"
//          "Além das montanhas\n"
//          "Na beira do mar\n"
//          "A mamãe gritou: Quá, quá, quá, quá\n"
//          "E os %i patinhos voltaram de lá. \n",
//          n, n - 1, n);
//
//   return 0;
// }

#include <stdio.h>

int main(void) {

  int n, i = 0;
  puts("Digite o número de patinhos:");
  scanf("%i", &n);

  printf("%i patinhos foram passear\n"
         "Além das montanhas\n"
         "Para brincar\n",
         n);
  while (i <= n) {
    printf("A mamãe gritou: Quá, quá, quá, quá\n"
           "Mas só %i patinhos voltaram de lá.\n"
           "Que se repete até nenhum patinho voltar de lá.\n",
           i++);
  }
  printf("Ao final, todos os patinhos voltam:\n"
         "A mamãe patinha foi procurar\n"
         "Além das montanhas\n"
         "Na beira do mar\n"
         "A mamãe gritou: Quá, quá, quá, quá\n"
         "E os %i patinhos voltaram de lá. \n",
         n);

  return 0;
}
