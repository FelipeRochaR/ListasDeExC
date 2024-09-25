//Exercicio5.
//Bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int numero, x;
    printf("Digite um numero para exibir sua tabuada: ");
    scanf("%d", &numero);
     x = 1;
    do {
    printf("%d x %d = %d\n", numero, x, numero * x);
    x++;
    }while (x <= 10);

    system("pause");
}
