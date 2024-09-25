//Ex3.
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){
    float areaFig,raio,comprimento,largura,lado;
    int opArea;
    char op;
    do{
        printf("Informe a operacao que deseja realizar: \n");
        printf("1 - Area de um circulo\n");
        printf("2 - Area de um retangulo\n");
        printf("3 - Area de um quadrado\n");
        scanf("%i",&opArea);

        switch(opArea){
        case 1:
            printf("Informe as dimensoes do circulo em CM...\n");
            printf("Raio: ");
            scanf("%f",&raio);

            areaFig = 3.14 * (raio * raio);
            printf("A area do circulo eh: %.2f cm\n", areaFig);
        break;

        case 2:
            printf("Informe as dimesoes do retangulo em CM...\n");
            printf("Comprimento: ");
            scanf("%f",&comprimento);
            printf("Largura: ");
            scanf("%f",&largura);
            areaFig = comprimento * largura;
            printf("A area do retangulo eh: %.2f cm\n", areaFig);
        break;

        case 3:
            printf("Informe as dimensoes do quadrado em CM...\n");
            printf("Lado: ");
            scanf("%f",&lado);

            areaFig = lado * lado;
            printf("A area do quadrado eh: %.2f cm\n", areaFig);
        break;
        }
    printf("Deseja fazer outra operacao? S - SIM | N - NAO\n");
    scanf("%s", &op);
    }while(op == 's' || op == 'S');
    system("pause");
    }

