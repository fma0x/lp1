/*
 * Uma fábrica tem um vendedor que recebe uma comissão calculada a partir do
 * número de itens de um pedido, segundo os seguintes critérios:
 *
 * • para pedidos com menos de 20 itens, a comissão é de 10% do valor total do
 * pedido;
 * • para pedidos de 20 a 49 itens, a comissão é de 15% do valor total do
 * pedido;
 * • para pedidos de 50 a 74 itens, a comissão é de 20% do valor total do
 * pedido;
 * • para pedidos iguais ou superiores a 75 itens, a comissão é de 25%.
 *
 * Escreva um programa que processe N pedidos vinculados a esse vendedor (N deve
 * ser lido, portanto).
 *
 * Para cada pedido o programa deve ler a quantidade de itens
 * vendidos e o valor total. O programa deve informar:
 * • A soma total das comissões;
 * • A média de itens vendidos;
 * • Porcentagem de pedidos com menos de 20 itens.
 */

#include <stdio.h>

struct pedido {
  int qt_itens;
  float valor_t;
  float comissao;
};

int main(void) {
  float vlcom = 0; // valor total da comissão;
  int count, qtd_total, qtd_pedidos = 0;

  puts("Digite abaixo quantos pedidos serão processados.");
  scanf("%i", &qtd_pedidos);

  struct pedido p[qtd_pedidos - 1];

  for (int i = 0; i < qtd_pedidos; i++) {
    puts("Digite a quantide de itens do pedido:");
    scanf("%i", &p[i].qt_itens);

    puts("Digite o valor total do pedido:");
    scanf("%f", &p[i].valor_t);

    if (p[i].qt_itens < 20) {
      p[i].comissao = p[i].valor_t * 0.1;
      count++;
    }
    if (p[i].qt_itens >= 20 && p[i].qt_itens <= 49)
      p[i].comissao = p[i].valor_t * 0.15;
    if (p[i].qt_itens >= 50 && p[i].qt_itens <= 74)
      p[i].comissao = p[i].valor_t * 0.2;
    if (p[i].qt_itens >= 75)
      p[i].comissao = p[i].valor_t * 0.25;

    vlcom += p[i].comissao;
    qtd_total += p[i].qt_itens;
  }

  printf("Valor total das comissões é: R$ %.2f.\n", vlcom);
  printf("A quantidade média de itens vendidos é: %i.\n",
         qtd_total / qtd_pedidos);
  printf("A quantidade de pedidos com menos de 20 itens: %i.\n", count);

  return 0;
}
