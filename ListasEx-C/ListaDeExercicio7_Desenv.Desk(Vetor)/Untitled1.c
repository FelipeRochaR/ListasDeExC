#include<stdio.h>
#include<stdlib.h>

int main(){
    int vet[5],i,soma=0;
    printf("Informe 5 valores para preencher o vetor...\n");
    for(i=0,i<5;i++){
        scanf("%i",&vet[i]);
        soma = soma + vet[i];w
    }
    for(i=0,i<5;i++){
        printf("%i ",vet[i]);
    }
    printf("\nA soma dos valores do vetor eh %i\n",soma);
    system("pause");
}
