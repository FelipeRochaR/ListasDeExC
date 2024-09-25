//Ex15.
//Bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    char resposta;
    int contador = 0;
    printf("Telefonou para a vitima? (s/n): ");
    scanf(" %c", &resposta);
    if(resposta == 's' || resposta == 'S') {
        contador++;
    }
    printf("Esteve no local do crime? (s/n): ");
    scanf(" %c", &resposta);
    if(resposta == 's' || resposta == 'S') {
        contador++;
    }
    printf("Mora perto da vitima? (s/n): ");
    scanf(" %c", &resposta);
    if(resposta == 's' || resposta == 'S') {
        contador++;
    }
    printf("Devia para a vitima? (s/n): ");
    scanf(" %c", &resposta);
    if(resposta == 's' || resposta == 'S') {
        contador++;
    }
    printf("Ja trabalhou com a vitima? (s/n): ");
    scanf(" %c", &resposta);
    if(resposta == 's' || resposta == 'S') {
        contador++;
    }
    if(contador == 2) {
        printf("Voce foi classificado como SUSPEITO\n");
    }
    else if(contador >= 3 && contador <= 4) {
        printf("Voce foi classificado como CUMPLICE\n");
    }
    else if(contador == 5) {
        printf("Voce foi classificado como ASSASSINO\n");
    }
    else {
        printf("Voce foi classificado como INOCENTE\n");
    }

    system("pause");
}
