#include <stdio.h>

int veloc_perm, veloc_veic, veloc_multa20;

int main(void) {
  puts("Digite a velocidade do veículo em Km/h:");
  scanf("%i", &veloc_veic);
  puts("Digite a velocidade permitida Km/h:");
  scanf("%i", &veloc_perm);

  veloc_multa20 = veloc_perm + (veloc_perm * .20);

  if (veloc_veic <= veloc_multa20 && veloc_veic > veloc_perm) {
    puts("Você foi multado em R$ 250,00.");
  } else if (veloc_veic > veloc_multa20) {
    puts("Você foi multado em R$ 750,00.");
  } else {
    puts("Você está devagar. Muito bem. Sem multas.");
  }
}
