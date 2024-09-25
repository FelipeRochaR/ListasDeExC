#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Exercicio 5
int main (){
    float cot_dolar, real, conversao;

    printf("Insira a cotacao atual do dolar US$\n");
    scanf("%f",&cot_dolar);
    printf("Insira o valor em reais R$\n");
    scanf("%f",&real);

    conversao = real * cot_dolar;

    printf("A conversao do valor em dolar sera: %.2f US$\n", conversao);

    system("pause");

}
