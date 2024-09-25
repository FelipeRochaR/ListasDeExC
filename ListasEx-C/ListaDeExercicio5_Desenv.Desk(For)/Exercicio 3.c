//Exercício 1.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

    /*Escreva um programa que solicita 10 números ao usuário, e ao final mostre o
      maior número digitado pelo usuário.*/

int main(){
    float num,i,maior;

    printf("Informe 10 numeros...\n");
    for(i = 0; i <= num; i++){
    if(i==1){
            maior = num;
        }if (num>maior){
            maior = num;
        }
        i = i + 1;
        printf("%f.\n",i);
    }
    printf("O maior numero informado eh %.2f\n",maior);
    system("pause");
}
