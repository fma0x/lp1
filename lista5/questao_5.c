/*
Desenvolva um programa que leia o salário de uma pessoa, a quantidade de contas
(despesas) que uma pessoa precisa pagar em um mês e, para cada conta, leia o
valor a ser pago. O programa deve somar todos os valores de contas que a pessoa
necessita pagar e depois verificar se a diferença entre o salário da pessoa e o
valor de todas as despesas que deve pagar no mês é positiva. Se a diferença
(salário – despesas) for positiva imprimir este valor da diferença na tela. Se a
diferença for negativa imprimir a mensagem “reduzir despesas”.
*/

#include <stdio.h>
int main(void) {
  float despesas, salario, count;

  puts("Digite o valor do seu salário abaixo.");
  scanf("%f", &salario);

  puts("Insira os valores das despesas abaixo. Digite 0 para finalizar.");
  for (;;) {
    scanf("%f", &despesas);
    count += despesas;

    if (despesas == 0)
      break;
  }

  if (salario > count)
    printf("Salário pagará as contas no total de R$ %.2f e sobrará R$ %.2f.\n",
           count, (salario - count));

  if (salario == count)
    puts("Tá liso. Não sobrou nada.");

  if (count > salario)
    printf(
        "Despesas em R$ %.2f e saldo negativo de R$ %.2f. Reduzir despesas.\n",
        count, (salario - count));

  return 0;
}
