//Ex14.
//Bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    float salario, reajuste;
    printf("Informe o salario...\n");
    scanf("%f",&salario);
    if(salario <= 280){
        reajuste = (salario * 0.2) + salario;
    printf("O salario antes do reajuste eh R$%.2f\n",salario);
    printf("O salario aumentou 20%%...\n");
    printf("O salario teve um aumento de R$%.2f\n",salario * 0.2);
    printf("Com o reajuste o salario vai para R$%.2f\n",reajuste);
    }else if(salario > 280 && salario <= 700){
        reajuste = (salario * 0.15) + salario;
    printf("O salario antes do reajuste eh R$%.2f\n",salario);
    printf("O salario aumentou 15%%...\n");
    printf("O salario teve um aumento de R$%.2f\n",salario * 0.15);
    printf("Com o reajuste o salario vai para R$%.2f\n",reajuste);
    }else if(salario > 700 && salario <=1500){
        reajuste = (salario * 0.1) + salario;
    printf("O salario antes do reajuste eh R$%.2f\n",salario);
    printf("O salario aumentou 10%%...\n");
    printf("O salario teve um aumento de R$%.2f\n",salario * 0.1);
    printf("Com o reajuste o salario vai para R$%.2f\n",reajuste);
    }else if(salario > 1500){
        reajuste = (salario * 0.05) + salario;
    printf("O salario antes do reajuste eh R$%.2f\n",salario);
    printf("O salario aumentou 5%%...\n");
    printf("O salario teve um aumento de R$%.2f\n",salario * 0.05);
    printf("Com o reajuste o salario vai para R$%.2f\n",reajuste);
    }

}
