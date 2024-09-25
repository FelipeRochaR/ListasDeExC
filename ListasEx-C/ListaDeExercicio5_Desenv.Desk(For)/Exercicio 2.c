//Exercício 1.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

    /*Criar um programa que leia um número que será o limite superior de um intervalo
      e imprimir todos os números impares menores que esse número.*/

int main(){
    int i, num;

    printf("Informe um numero...\n");
    scanf("%i",&num);

    printf("Os numeros impares menores que %i sao:\n",num);
    for(i = 1; i < num; i = i + 2){
        num % i != 0;
        printf("%i.\n",i);
    }
    system("pause");
}
