//Exercicio 16.
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main() {
    int num, i = 2;
    int primo = 1;

    printf("Digite um numero inteiro maior que 1: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("O numero fornecido nao eh valido. Por favor, insira um numero inteiro maior que 1.\n");
        return 1; // Saída do programa com erro
    }
    while (i <= num / 2) {
        if (num % i == 0) {
            primo = 0;
            break;
        }
        i++;
    }
    if (primo == 1)
        printf("%d eh um numero primo.\n", num);
    else
        printf("%d nao eh um numero primo.\n", num);

    system("pause");
}
