#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Exercicio 8
int main(){
    float nota1,nota2,nota3,media_final;

    printf("Informe a nota 1\n");
    scanf("%f",&nota1);
    printf("Informe a nota 2\n");
    scanf("%f",&nota2);
    printf("Informe a nota 3\n");
    scanf("%f",&nota3);

    media_final = (2 * nota1 + 3 * nota2 + 5 * nota3) / (2 + 3 + 5);

    printf("A media final do aluno sera: %.2f\n", media_final);

    system("pause");
}
