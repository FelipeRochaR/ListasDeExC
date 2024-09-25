//Biblioteca
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Exercicio 4
int main (){
    float anos, meses, dias, IdadeEmDias;

    printf("Informe sua idade em anos\n");
    scanf("%f",&anos);
    printf("Meses\n");
    scanf("%f",&meses);
    printf("Dias\n");
    scanf("%f",&dias);

    IdadeEmDias = (anos * 365) + (meses * 30) + dias;

    printf("A idade expressa em dias sera: %.0f dias\n", IdadeEmDias);

    system("pause");

}
