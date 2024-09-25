//Exercicio 7.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
  int soma = 0, numero = 1;

  while(numero <= 500) {
    if(numero % 2 != 0 && numero % 3 == 0) {
      soma += numero;
    }
    numero++;
  }
  printf("A soma dos numeros impares e multiplos de 3 entre 1 e 500 eh: %d\n", soma);
  system("pause");
}
