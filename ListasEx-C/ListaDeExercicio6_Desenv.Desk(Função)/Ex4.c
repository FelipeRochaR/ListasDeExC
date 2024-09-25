//EX4.
#include<stdio.h>

float maiorValor(float num1, float num2);
float maiorValor(float num1, float num2){
    if (num1 > num2){
        return num1;
    }else{
        return num2;
    }
}

int main() {
    float numero1, numero2, maior;
    char op;
    do{
    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    maior = maiorValor(numero1, numero2);

    printf("O maior numero e: %.2f\n", maior);

    printf("Deseja verificar outro numero? S / N\n");
    scanf("%s",&op);
    }while(op == 's' || op == 'S');

    return 0;
}
