//Exercicio6.
//Bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    // armazena a altura e sexo das pessoas.
    float altura, media_altura_mulheres = 0, media_altura_homens = 0;
    char sexo;
    int contador_mulheres = 0, contador_homens = 0, contador_pessoas = 0;

    // Loop para os dados das 10 pessoas.
    while(contador_pessoas < 10){
        printf("Insira a altura da pessoa %d em cm: ", contador_pessoas + 1);
        scanf("%f", &altura);
        printf("Insira o sexo da pessoa %d (m ou f): ", contador_pessoas + 1);
        scanf(" %c", &sexo); // espaço antes de %c para consumir o caractere de nova linha
        // Verifica o sexo e atualiza os contadores e somas das alturas
        if (sexo == 'f' || sexo == 'F'){
            media_altura_mulheres += altura;
            contador_mulheres++;
        }else if(sexo == 'm' || sexo == 'M'){
            media_altura_homens += altura;
            contador_homens++;
        }else{
            printf("Sexo invalido. Insira 'm' para masculino ou 'f' para feminino.\n");
            continue; // Reinicia o loop sem o contador de pessoas
        }
        contador_pessoas++;
    }
    // Calcula as médias.
    if(contador_mulheres > 0){
        media_altura_mulheres /= contador_mulheres;
        printf("A media de altura das mulheres eh: %.0f centimetros\n", media_altura_mulheres);
    }else{
        printf("Nenhuma mulher foi registrada.\n");
    }
    if(contador_homens > 0){
        media_altura_homens /= contador_homens;
        printf("A media de altura dos homens eh: %.0f centimetros\n", media_altura_homens);
    }else{
        printf("Nenhum homem foi registrado.\n");
    }
    system("pause");
}
