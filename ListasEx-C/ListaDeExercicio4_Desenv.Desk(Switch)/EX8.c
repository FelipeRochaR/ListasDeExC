//Ex8.
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    float saldo=0,valor;
    char operacao,resp;

    do{
    printf("Informe a operacao desejada:\n");
    printf("S - Saque\n");
    printf("D - Deposito\n");
    printf("C - Consulta\n");
    scanf("%s",&operacao);

    switch(operacao){
        case 'S':
        case 's':
            printf("Qual valor deseja retirar...\n");
            scanf("%f",&valor);
            if(valor > saldo){
                printf("Saldo insuficiente...\n");
            }else{
            saldo = saldo - valor;
            }
            break;

        case 'D':
        case 'd':
            printf("Qual valor deseja depositar...\n");
            scanf("%f",&valor);
            saldo = saldo + valor;
            break;

        case 'C':
        case 'c':
            printf("Saldo em conta = R$%.2f.\n",saldo);
            break;

        default:
            printf("Operacao invalida...\n");
            break;
        }
        printf("Deseja fazer uma nova operacao? S - SIM | N - NAO\n");
        scanf("%s", &resp);
        system("cls");
    }while(resp == 's' || resp == 'S');
}
