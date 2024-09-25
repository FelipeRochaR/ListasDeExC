//Ex5.
//Bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int x;
    float raiz,metade;
    printf("Informe um numero\n");
    scanf("%i",&x);
    if(x % 2 == 0){
        raiz = sqrt(x);
        printf("O numero eh par, sua raiz quadrada eh %.2f\n",raiz);
    }else{
        metade = x / 2.0;
        printf("O numero eh impar, sua metade eh %.2f\n",metade);
    }
}
