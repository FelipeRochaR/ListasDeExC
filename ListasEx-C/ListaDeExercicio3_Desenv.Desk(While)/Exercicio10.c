//Exercicio 10.
#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int main() {
  int n, m, i, j;

  printf("Digite a altura: ");
  scanf("%d", &n);
  printf("Digite a largura: ");
  scanf("%d", &m);

  i = 1;
  do {
    j = 1;
    do {
      printf("*");
      j++;
    } while (j <= m);
    printf("\n");
    i++;
  } while (i <= n);
  system("pause");
}
