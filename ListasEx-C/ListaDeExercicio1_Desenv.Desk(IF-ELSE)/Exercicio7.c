#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Exercicio 7
int main(){
    float nota1, nota2, nota3, media;

    printf("Informe a nota 1\n");
    scanf("%f",&nota1);
    printf("Informe a nota 2\n");
    scanf("%f",&nota2);
    printf("Informe a nota 3\n");
    scanf("%f",&nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("A media das notas e de %.2f\n", media);

    system("pause");

}
