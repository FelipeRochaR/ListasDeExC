//EX7.
#include<stdio.h>

int numero;

float avista(float valor){
    float total;
    total =  valor - (valor * 0.10);
    printf("O valor a ser pago eh R$ %.2f\n", total);
}

float parcel2(float valor){
    float total;
    total =  valor /2;
    printf("O valor a ser pago eh 2 x R$ %.2f\n", total);
}

float parcel3_10(float valor){
    float total, juros;
    do{
    printf("Qual a quantidade de parcelas: 3 a 10 x\n");
    scanf("%i",&numero);
    }while(numero < 3 || numero >10);
    juros = numero * 3;
    total = ((valor*(juros/100))+ valor)/numero;
    return total;
}
int main(){
    float valor, total;
    char op,continuar;
    do{
    printf("Qual valor total da compra:\n");
    scanf("%f",&valor);
    printf("Informe forma de pagamento\n");
    printf("A - a vista\n");
    printf("B - 2 vezes\n");
    if(valor > 100){
        printf("C - 3 a 10 vezes\n");
    }
    scanf("%s", &op);
    switch(op){
    case 'a':
    case 'A':
        avista(valor);
        break;
    case 'b':
    case 'B':
        parcel2(valor);
        break;
    case 'c':
    case 'C':
        total = parcel3_10(valor);
        printf("Valor total da compra eh de %i x R$ %.2f\n",numero,total);
        break;
    default:
        printf("opcao invalida\n");
    }
    printf("Deseja fazer novo calculo: S / N\n");
    scanf("%s", &continuar);
    }while(continuar == 's' || continuar == 'S');
}
