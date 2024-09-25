//EX2.
#include<stdio.h>

int verificarPar(int numero) {
    if (numero % 2 == 0) {
        printf("%i eh um numero Par.\n", numero);
    } else {
        printf("%i eh um numero Impar.\n", numero);
    }
}

int main() {
    int valor;
    char op;
    do{
    printf("Digite um numero: ");
    scanf("%i", &valor);

    verificarPar(valor);

    printf("Deseja verificar outro numero? S / N\n");
    scanf("%s",&op);
    }while(op == 's' || op == 'S');

    return 0;
}
