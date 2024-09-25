//Exercicio 12.
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main() {
  int num = 1;
  int mult = 0;
  while (mult < 5) {
    if (num % 3 == 0) {
      printf("%d ", num);
      mult++;
    }
    num++;
  }
  system("pause");
}
