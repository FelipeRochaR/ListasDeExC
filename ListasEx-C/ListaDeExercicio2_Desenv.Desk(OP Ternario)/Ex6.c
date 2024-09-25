//Ex6.
//Bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    float maca,result;
    printf("Informe a quantidade de macas\n");
    scanf("%f",&maca);

    if(maca < 12){
            float preco1 = maca * 1.30;
        printf("O valor das macas sera de R$%.2f\n",preco1);
    }else if(maca >= 12){
            float preco2 = maca * 1.00;
        printf("O valor das macas sera de R$%.2f\n",preco2);
    }
}
