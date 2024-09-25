//Ex5.
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){
    float percurso, consumo;
    char carro,op;

    do{
    printf("Digite o percurso percorrido em Km: ");
    scanf("%f", &percurso);

    printf("Digite o tipo do seu carro (A, B ou C): ");
    scanf(" %c", &carro);

    switch (carro){
        case 'A':
        case 'a':
            consumo = percurso / 12.0;
            break;

        case 'B':
        case 'b':
            consumo = percurso / 9.0;
            break;

        case 'C':
        case 'c':
            consumo = percurso / 8.0;
            break;

        default:
            printf("Tipo de carro inválido!\n");
            return 1;
    }
    printf("Consumo estimado de combustível: %.2f litros\n", consumo);

        printf("Deseja fazer uma nova operacao? S - SIM | N - NAO\n");
        scanf("%s", &op);
        system("cls");
    }while(op == 's' || op == 'S');
}
