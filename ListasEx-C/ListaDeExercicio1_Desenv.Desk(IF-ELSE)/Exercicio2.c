//Biblioteca
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Exercicio 2
int main(){
    float n1, antecessor, sucessor;
    printf("Informe o numero\n");
    scanf("%f",&n1);

    antecessor = n1 - 1;
    sucessor = n1 + 1;

    printf("O antecessor de %.2f = %.2f\n",n1, antecessor);
    printf("O sucessor de %.2f = %.2f\n",n1, sucessor);

    system("pause");
}
