//Ex4.
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){
    float valor;
    int idade;
    char op;

    do{
        printf("Como voce se encaixa nas opcoes?...\n");
        printf("1 - Crianca com menos de 10 anos.\n");
        printf("2 - Conveniado com idade entre 10 e 30 anos.\n");
        printf("3 - Conveniado com idade entre 40 e 60 anos.\n");
        printf("4 - Conveniado com mais de 60 anos.\n");
        scanf("%i",&idade);

        switch(idade){
        case 1:
            valor = 100 + 80;
            printf("O valor a ser pago no plano de saude sera de R$%.2f.\n",valor);
            break;

        case 2:
            valor = 100 + 50;
            printf("O valor a ser pago no plano de saude sera de R$%.2f.\n",valor);
            break;

        case 3:
            valor = 100 + 95;
            printf("O valor a ser pago no plano de saude sera de R$%.2f.\n",valor);
            break;

        case 4:
            valor = 100 + 130;
            printf("O valor a ser pago no plano de saude sera de R$%.2f.\n",valor);
            break;
        }
        printf("Deseja consultar novamente? S - SIM | N - NAO\n");
        scanf("%s", &op);
    }while(op == 's' || op == 'S');
    system("pause");
}
