//Ex4.
//Bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    float idade,peso;
    printf("Informe sua idade\n");
    scanf("%f",&idade);
    printf("Informe o seu peso\n");
    scanf("%f",&peso);
    if(idade >= 18 && idade <= 67 && peso >= 50){
        printf("Voce PODE doar sangue\n");
    }else{
        printf("Voce NAO PODE doar sangue\n");
    }

    system("pause");
}
