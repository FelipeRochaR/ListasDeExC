//EX1.
#include<stdio.h>

int verificarPositivo(int numero) {
    if (numero >= 0) {
        printf("%d eh um numero positivo.\n", numero);
    } else {
        printf("%d eh um numero negativo.\n", numero);
    }
}

int main() {
    int valor;
    char op;
    do{
    printf("Digite um numero: ");
    scanf("%i", &valor);

    verificarPositivo(valor);

    printf("Deseja verificar outro numero? S / N\n");
    scanf("%s",&op);
    }while(op == 's' || op == 'S');

    return 0;
}
