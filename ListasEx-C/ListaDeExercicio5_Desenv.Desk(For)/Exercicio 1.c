//Exerc�cio 1.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

    /*Solicitar ao usu�rio que escolha um n�mero para que seja exibida a sua tabuada
      na tela.*/

int main(){
    int num,i;

    printf("Informe o numero desejado: ");
    scanf("%i",&num);

    for(i = 1; i <= 10; i++){
        printf("%i x %i = %i\n",num,i,num * i);
    }
    system("pause");
}
