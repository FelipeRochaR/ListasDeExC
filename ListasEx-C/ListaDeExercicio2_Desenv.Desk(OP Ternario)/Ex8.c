//Ex8.
//Bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    float valorprod, result;
	printf("Informe o valor do produto\n");
	scanf("%f", &valorprod);
	if (valorprod < 20){
        result = valorprod + (valorprod * 0.45);
        printf("O valor final do produto sera de %.2f\n",result);
    }
    else{
        result = valorprod + (valorprod * 0.3);
        printf("O valor final do produto sera de %.2f\n",result);
    }
	system("pause");
}
