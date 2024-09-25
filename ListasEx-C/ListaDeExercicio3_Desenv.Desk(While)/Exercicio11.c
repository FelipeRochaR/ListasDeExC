//Exercicio 11.
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main() {
  int n, i, j;

  printf("Digite um valor para n: ");
  scanf("%d", &n);

  i = 1;
  do {
    j = 1;
    do {
      printf("*");
      ++j;
    } while (j <= i);
    printf("\n");
    ++i;
  } while (i <= n);
  system("pause");
}
