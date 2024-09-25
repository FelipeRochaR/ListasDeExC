#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Exercicio 6
int main(){
    float peso, altura, imc;

    printf("Informe o peso em Kg\n");
    scanf("%f",&peso);
    printf("Informe a altura em metros\n");
    scanf("%f",&altura);

    imc = peso / (altura * altura);

    printf("O IMC sera de %.2f Kg/m2\n", imc);

    system("pause");
}
