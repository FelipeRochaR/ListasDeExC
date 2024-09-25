//Ex21.
//Bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    printf("Exercicio 20\n\n");
    int a, b, c;
    float delta, raiz1, raiz2;
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("Digite o valor de C: ");
    scanf("%d", &c);
    if (a == 0){
        printf("Nao eh equacao de segundo grau...\n");
        return 1;
    }
    delta = b * b - 4 * a * c;
    if (delta >= 0){
        printf("O valor de Delta eh: %.2f\n", delta);
        if (delta < 0){
            raiz1 = (-b + sqrt(delta)) / (2 * a);
            raiz2 = (-b - sqrt(delta)) / (2 * a);
            printf("As raizes da equacao serao: %.2f e %.2f\n", raiz1, raiz2);
        }else if{
            raiz1 = -b / (2 * a);
            printf("A unica raiz real da equacao eh: %.2f\n", raiz1);
        }
    }else if{
        printf("Nao ha raizes reais...\n");
    }
    system("pause");
}
//Tem que arrumar.
