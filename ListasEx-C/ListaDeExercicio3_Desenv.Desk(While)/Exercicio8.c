//Exercicio 8.
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int num, somaPosi = 0, quantNega = 0;
    do{
        printf("Digite um numero: ");
        scanf("%d",&num);
        if(num > 0){
            somaPosi += num;
        }else if(num < 0){
            quantNega++;
        }
    }while(num != 0);
    printf("A soma dos numeros positivos: %d\n",somaPosi);
    printf("A quantidade dos numeros negativos: %d\n",quantNega);

    system("pause");
}
