//Ex7.
//Bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    char genero;
    int idade;
    printf("Informe seu genero. Feminino(F),Masculino(M)...\n");
    scanf("%c",&genero);
    printf("Informe sua idade...\n");
    scanf("%i",&idade);
    if (toupper(genero) == 'F'){
    if(idade < 25){
        printf("ACEITA...\n");
    }else{
        printf("NAO ACEITA...\n");
    }
    }else{
        printf("NAO ACEITA...\n");
    }
	system("pause");
}
