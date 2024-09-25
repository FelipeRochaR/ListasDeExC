//Biblioteca
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Exercicio 1
int main (){ //função principal
    float x, y, soma, sub, mult, divi;
    printf("Ola mundo...\n\n");

    printf("Informe o valor de x\n");
    scanf("%f",&x);
    printf("Informe o valor de y\n");
    scanf("%f",&y);

        soma = x + y;
        sub = x - y;
        mult = x * y;
        divi = x / y;

    printf("A soma de %.2f + %.2f = %.2f\n",x, y, soma);
    printf("A subtracao de %.2f - %.2f = %.2f\n",x, y, sub);
    printf("A multiplicacao de %.2f * %.2f = %.2f\n",x, y, mult);
    printf("A divisao de %.2f / %.2f = %.2f\n",x, y, divi);

    system("pause");
}
