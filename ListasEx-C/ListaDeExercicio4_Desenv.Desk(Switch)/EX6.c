//Ex6.
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){
    int destino,pass,ida,idaVolta;
    float preco;
    char op;
    do{
    printf("Selecione o destino...\n");
    printf("1 - Regiao Norte.\n");
    printf("2 - Regiao Nordeste.\n");
    printf("3 - Regiao Centro-Oeste.\n");
    printf("4 - Regiao Sul.\n");
    scanf("%i",&destino);

    switch(destino){
        case 1:
            printf("Passagem sera de...\n");
            printf("1 - Ida.\n");
            printf("2 - Ida e Volta.\n");
            scanf("%i",&pass);
        if(pass == 1){
            preco = 500;
            printf("O preco da sua passagem eh R$%.2f.\n",preco);
        }else if(pass == 2){
            preco = 900;
            printf("O preco da sua passagem eh R$%.2f.\n",preco);
    }
        break;
        case 2:
            printf("Passagem sera de...\n");
            printf("1 - Ida.\n");
            printf("2 - Ida e Volta.\n");
            scanf("%i",&pass);
        if(pass == 1){
            preco = 350;
            printf("O preco da sua passagem eh R$%.2f.\n",preco);
        }else if(pass == 2){
            preco = 650;
            printf("O preco da sua passagem eh R$%.2f.\n",preco);
    }
        break;
        case 3:
            printf("Passagem sera de...\n");
            printf("1 - Ida.\n");
            printf("2 - Ida e Volta.\n");
            scanf("%i",&pass);
        if(pass == 1){
            preco = 350;
            printf("O preco da sua passagem eh R$%.2f.\n",preco);
        }else if(pass == 2){
            preco = 600;
            printf("O preco da sua passagem eh R$%.2f.\n",preco);
    }
        break;
        case 4:
            printf("Passagem sera de...\n");
            printf("1 - Ida.\n");
            printf("2 - Ida e Volta.\n");
            scanf("%i",&pass);
        if(pass == 1){
            preco = 300;
            printf("O preco da sua passagem eh R$%.2f.\n",preco);
        }else if(pass == 2){
            preco = 550;
            printf("O preco da sua passagem eh R$%.2f.\n",preco);
    }
        break;
    }
    printf("Deseja verificar novamente? S - SIM | N - NAO\n");
    scanf("%s", &op);
    system("cls");
}while(op == 's' || op == 'S');
    system("pause");
}
