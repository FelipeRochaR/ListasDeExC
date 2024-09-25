//Ex2.
//Bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int NumLados;
    char op;
    do{
    printf("Informe o numero de lados da figura geometrica: (entre 3 e 6)\n");
    scanf("%i", &NumLados);
    switch(NumLados){
    case 3:
        printf("A figura eh um Triangulo\n");
        break;
    case 4:
        printf("A figura eh um Quadrado\n");
        break;
    case 5:
        printf("A figura eh um Pentagono\n");
        break;
    case 6:
        printf("A figura eh um Hexagono\n");
        break;
    default:
        printf("Valor invalido\n");
        break;
    }
     printf("Deseja verificar novamente? S - SIM | N - NAO\n");
    scanf("%s", &op);
    }while(op == 's' || op == 'S');
    system("pause");
}
