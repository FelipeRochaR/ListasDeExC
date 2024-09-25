//Exercicio 15.
#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int main() {
    int valorSaque;
    int notas100 = 0, notas50 = 0, notas20 = 0, notas10 = 0, notas5 = 0, notas2 = 0, notas1 = 0;

    printf("Digite o valor do saque: ");
    scanf("%d", &valorSaque);

    while (valorSaque >= 100) {
        notas100++;
        valorSaque -= 100;
    }
    while (valorSaque >= 50) {
        notas50++;
        valorSaque -= 50;
    }
    while (valorSaque >= 20) {
        notas20++;
        valorSaque -= 20;
    }
    while (valorSaque >= 10) {
        notas10++;
        valorSaque -= 10;
    }
    while (valorSaque >= 5) {
        notas5++;
        valorSaque -= 5;
    }
    while (valorSaque >= 2) {
        notas2++;
        valorSaque -= 2;
    }
    while (valorSaque >= 1) {
        notas1++;
        valorSaque -= 1;
    }

    printf("Voce recebera: \n");
    printf("Notas de 100: %d\n", notas100);
    printf("Notas de 50: %d\n", notas50);
    printf("Notas de 20: %d\n", notas20);
    printf("Notas de 10: %d\n", notas10);
    printf("Notas de 5: %d\n", notas5);
    printf("Notas de 2: %d\n", notas2);
    printf("Notas de 1: %d\n", notas1);

    system("pause");
}
