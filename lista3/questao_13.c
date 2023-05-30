/*a) infantil A = 5-7 anos*/
/*b) infantil B = 8-10 anos*/
/*c) juvenil A = 11-13 anos*/
/*d) juvenil B = 14-17 anos*/
/*e) adulto = maiores de 18 anos*/

#include <stdio.h>

int main(void) {
  int age;

  printf("Digite a idade do nadador para obter sua categoria: ");
  scanf("%i", &age);

  if (age >= 5 && age <= 7)
    printf("Infantil A\n");

  if (age >= 8 && age <= 10)
    printf("Infantil B\n");

  if (age >= 11 && age <= 13)
    printf("Juvenil A\n");

  if (age >= 14 && age <= 17)
    printf("Juvenil B\n");

  if (age >= 18)
    printf("Adulto\n");
}
