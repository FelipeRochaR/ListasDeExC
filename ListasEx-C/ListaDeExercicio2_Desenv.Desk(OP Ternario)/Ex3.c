//Ex3.
//Bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    float num1,num2,num3;
    printf("Informe tres numeros\n");
    scanf("%f%f%f",&num1,num2,num3);
    if (num1 > num2 && num1 > num3){
        if(num2 > num3){
            printf("Os numeros em ordem crescente: %f, %f, %f",num3,num2,num1);
        }else{
            printf("Os numeros em ordem crescente: %f, %f, %f",num2,num3,num1);
        }
    }
    if(num2 > num1 && num2 > num3){
         if(num1 > num3){
            printf("Os numeros em ordem crescente: %f, %f, %f",num3,num1,num2);
        }else{
            printf("Os numeros em ordem crescente: %f, %f, %f",num1,num3,num2);
        }
    }
    if(num3 > num1 && num3 > num2){
         if(num1 > num2){
            printf("Os numeros em ordem crescente: %f, %f, %f",num2,num1,num3);
        }else{
            printf("Os numeros em ordem crescente: %f, %f, %f",num1,num2,num3);
        }
    }
    system("pause");
}
