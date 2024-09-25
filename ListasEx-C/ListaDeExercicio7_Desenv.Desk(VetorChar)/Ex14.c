#include<stdio.h>
#include<string.h>

int main(){
    char senha[20],confirma[20];
    int tamanho,i,flag_num=0, flag_let=0;
    printf("Informe senha\n");
    gets(senha);
    fflush(stdin);
    tamanho = strlen(senha);//conta quantidade de caracteres
    for(i=0;senha[i]!='\0';i++){//procura numeros e letras
        if (senha[i]== '1'||senha[i]=='2'||senha[i]=='3'|| senha[i]=='4'|| senha[i]=='5'|| senha[i]=='6'|| senha[i]=='7'|| senha[i]=='8'|| senha[i]=='9'|| senha[i]=='0'){
            flag_num++;
        }else{
            flag_let=1;
        }
    }
    if(flag_num == 1 && flag_let == 1 && tamanho >=8){//valida senha
        printf("Senha valida\n");
        printf("Confirme sua senha\n");
        gets(confirma);
        if (!strcmp(senha,confirma)){//compara igualdade
            printf("Senha confirmada\n");
        }else{
            printf("Senhas nao conferem\n");
        }
    }else{
        printf("Senha fora do padrao\n");
    }

}