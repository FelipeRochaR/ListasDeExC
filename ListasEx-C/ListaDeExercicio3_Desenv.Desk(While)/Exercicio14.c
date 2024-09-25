//Exercicio 14.
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main() {
  int numero, somaDiv, divisor;

  printf("Digite um numero inteiro: ");
  scanf("%d", &numero);

  somaDiv = 0;
  divisor = 1;

  while (divisor < numero) {
    if (numero % divisor == 0) {
      somaDiv += divisor;
    }
    divisor++;
  }
  printf("A soma dos divisores de %d (excluindo ele mesmo) eh: %d\n", numero, somaDiv);
  system("pause");
}
