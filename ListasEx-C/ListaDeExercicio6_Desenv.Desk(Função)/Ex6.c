//EX6.
#include <stdio.h>

float potencia(float x, int n){

    float resultado = 1.0;

    if (n > 0){

        for (int i = 0; i < n; i++){
            resultado *= x;
        }
    } else if (n < 0) {

        for (int i = 0; i > n; i--){
            resultado /= x;
        }
    }

    return resultado;
}

int main(){
    float x;
    int n;
    char op;

    do{
    printf("Digite o valor de x: ");
    scanf("%f", &x);

    printf("Digite o valor de n: ");
    scanf("%i", &n);

    printf("O resultado de %.2f elevado a %i eh: %.2f\n", x, n, potencia(x, n));

    printf("Deseja verificar outro numero? S / N\n");
    scanf("%s",&op);
    }while(op == 's' || op == 'S');

    return 0;
}
