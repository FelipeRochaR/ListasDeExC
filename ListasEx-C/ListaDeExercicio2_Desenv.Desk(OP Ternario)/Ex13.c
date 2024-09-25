//Ex13.
//Bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    float salario, prest, limite;
    printf("Informe salario bruto\n");
    scanf("%f",&salario);
    printf("Informe valor da prestacao\n");
    scanf("%f",&prest);
    limite = salario * 0.3;
    if(prest <= limite){
        printf("Emprestimo concedido...\n");
    }else{
        printf("Valor excede 30%% de seu salario bruto, Emprestimo negado...\n");
    }
/*
    prest <= limite ? printf("Emprestimo concedido...\n") : printf("Valor excede 30%% de seu salario bruto, Emprestimo negado...\n");
*/

    system("pause");
}
