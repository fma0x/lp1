#include <stdio.h>

int soma(int n1, int n2) { return n1 + n2; }
int sub(int n1, int n2) { return n1 - n2; }
int mult(int n1, int n2) { return n1 * n2; }
int div(int n1, int n2) { return n1 / n2; }

int main(void) {
  int n1, n2;
  char op;
  printf("Digite um operador (+, -, * ou /) para executar uma ação: ");
  scanf("%c", &op);

  printf("Digite agora dois números para a operação:\n");
  printf("primeiro número: ");
  scanf("%d", &n1);
  printf("segundo número: ");
  scanf("%d", &n2);

  switch (op) {
  case '+':
    printf("A soma de %d e %d é: %d.\n", n1, n2, soma(n1, n2));
    break;
  case '-':
    printf("A subtração de %d e %d é: %d.\n", n1, n2, sub(n1, n2));
    break;
  case '*':
    printf("A multiplicação de %d e %d é: %d.\n", n1, n2, mult(n1, n2));
    break;
  case '/':
    if (n2 != 0)
      printf("A divisão de %d e %d é: %d.\n", n1, n2, div(n1, n2));
    else
      printf("Não se divide por zero.");
    break;
  default:
    printf("Erro! Por favor, digite dois números para realizar um operação.");
  }
}
