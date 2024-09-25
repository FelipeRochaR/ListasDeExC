//Biblioteca
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Exercicio 3
int main (){ //função principal
    float consumo, distancia, combustivel;

    printf("Informe a distancia percorrida em Km\n");
    scanf("%f",&distancia);
    printf("Informe o combustivel gasto em Litros\n");
    scanf("%f",&combustivel);

        consumo = distancia / combustivel;

    printf("O consumo medio do automovel sera de %.2f km/l.\n", consumo);

    system("pause");
}
