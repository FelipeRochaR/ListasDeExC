//Exercicio4.
//Bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int x;
    float num,maior=0;
    x = 1;
    printf("Informe 10 numeros\n");
    while(x<=10){
        scanf("%f",&num);
        if(x==1){
            maior = num;
        }if (num>maior){
            maior = num;
        }
    x = x + 1;
    }
    printf("O maior numero informado eh %.2f\n",maior);
    system("pause");
}
