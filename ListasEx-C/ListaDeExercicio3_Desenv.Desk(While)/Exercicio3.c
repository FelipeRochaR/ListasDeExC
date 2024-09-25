//Exercicio3.
//Bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int x;
    float num,soma=0,media;
    x = 1;
    while(x<=10){
        printf("Informe valor\n");
        scanf("%f",&num);
        soma = soma + num;
        x = x + 1;
    }
    media = soma/10;
    printf("A media dos numeros informados sera %.2f...\n",media);
    system("pause");
}
