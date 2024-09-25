//Ex1.
//Bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    float valor1;
    float valor2;
    float resultado;
    int Operador;
    char op;

    do{
    printf("Informe um numero:\n");
    scanf("%f", &valor1);
    printf("Informe outro numero:\n");
    scanf("%f", &valor2);

    printf("Escolha a operacao:\n");
    printf("1 - +\n");
    printf("2 - -\n");
    printf("3 - /\n");
    printf("4 - *\n");
    scanf("%i", &Operador);
    switch(Operador)
    {
        case 1:
        resultado = valor1 + valor2;
        printf("O resultado da soma eh: %.2f\n", resultado);
        break;
        case 2:
        resultado = valor1 - valor2;
        printf("O resultado da subtracao eh: %.2f\n", resultado);
        break;
        case 3:
        resultado = valor1 / valor2;
        printf("O resultado da divisao eh: %.2f\n", resultado);
        break;
        case 4:
        resultado = valor1 * valor2;
        printf("O resultado da multiplicacao eh: %.2f\n", resultado);
        break;
        default:
        printf("Valor invalido/n");
        break;
    }

    printf("Deseja fazer outra operacao? S - SIM | N - NAO\n");
    scanf("%s", &op);
}while(op == 's' || op == 'S');

system("pause");
}
