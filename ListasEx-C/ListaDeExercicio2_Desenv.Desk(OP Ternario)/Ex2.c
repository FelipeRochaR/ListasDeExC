//Ex2.
//Bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int idade;
    printf("Insira a idade\n");
    scanf("%i",&idade);
    if(idade<16){
        printf("A idade nao permite retirar o titulo de eleitor\n");
    } else if(idade >= 18 && idade <= 70){
        printf("O voto eh OBRIGATORIO\n");
    } else if(idade == 16 || idade == 17){
        printf("O voto eh OPCIONAL ou NAO OBRIGATORIO\n");
    } else if(idade > 70){
        printf("O voto eh OPCIONAL ou NAO OBRIGATORIO\n");
    }
    system("pause");
}
