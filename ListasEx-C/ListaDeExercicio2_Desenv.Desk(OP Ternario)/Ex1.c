//Ex1.
//Bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int x,result;
    printf("Informe o numero\n");
    scanf("%i",&x);
    if(x>=0){
        result = x * 3;
        printf("O numero eh positivo, seu triplo eh %i\n",result);
    }else{
        result = x * x;
        printf("O numero eh negativo, ele elevado ao quadrado eh %i\n",result);
    }
    system("pause");
}
