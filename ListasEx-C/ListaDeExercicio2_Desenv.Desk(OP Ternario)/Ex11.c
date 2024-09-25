//Ex11.
//Bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    char nome_municipio;
    int eleitores_aptos, votos_candidato;
    printf("Informe o nome do Municipio...\n");
    scanf("%s",&nome_municipio);
    printf("Informe o numero de eleitores aptos para votar...\n");
    scanf("%i",&eleitores_aptos);
    printf("Informe o numero de votos adquiridos pelo candidato mais votado...\n");
    scanf("%i",&votos_candidato);
    if(eleitores_aptos < 20000){
        printf("O municipio nao tem segundo turno...\n");
    }else if(eleitores_aptos >= 20000 && votos_candidato <= (eleitores_aptos * 0.5)){
        printf("O municipio tera um segundo turno nas eleicoes...\n");
    }else{
        printf("Nao sera necessario um segundo turno...\n");
    }
    system("pause");
}
