#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Exercicio 9
int main(){
    float custo_fab, result;

    printf("Informe o custo de fabrica\n");
    scanf("%f",&custo_fab);

    result = custo_fab + (custo_fab * 0.28) + (custo_fab * 0.45);

    printf("O custo final sera de %.2f\n", result);

    system("pause");
}
