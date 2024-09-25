//Exercicio 9.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    float renda_mens, imposto_renda;
    char op;

    do{
        printf("Informe sua renda mensal: ");
        scanf("%f",&renda_mens);
        if(renda_mens < 1637.11){
            printf("Voce esta isento do imposto de renda...\n");
        }else if(renda_mens > 1637.11 && renda_mens < 2453.50){
            imposto_renda = renda_mens * 0.075;
            printf("Voce tera que pagar 7,5%% de imposto de renda. Total de R$%.2f\n",imposto_renda);
        }else if(renda_mens > 2453.50 && renda_mens < 3271.38){
            imposto_renda = renda_mens * 0.15;
            printf("Voce tera que pagar 15%% de imposto de renda. Total de R$%.2f\n",imposto_renda);
        }else if(renda_mens > 3271.38 && renda_mens < 4087.65){
            imposto_renda = renda_mens * 0.225;
            printf("Voce tera que pagar 22,5%% de imposto de renda. Total de R$%.2f\n",imposto_renda);
        }else if(renda_mens > 4087.65){
            imposto_renda = renda_mens * 0.275;
            printf("Voce tera que pagar 27,5%% de imposto de renda. Total de R$%.2f\n",imposto_renda);
        }
        printf("Deseja verificar novamente? S - SIM | N - NAO\n");
        scanf("%s", &op);
    }while(op == 's' || op == 'S');
    system("pause");
}
