//Exercicio2.
//Bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int num;
    printf("Informe valores...\n");
    printf("Numero negativo para parar o sistema...\n");
    do{
        printf("Informe valores\n");
        scanf("%f",&num);
    }while(num > 0);
    system("pause");
}
