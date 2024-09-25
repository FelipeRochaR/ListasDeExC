//EX8.

float calcMedArit(float nota1,float nota2,float nota3){
    return (nota1 + nota2 + nota3) / 3;
}
float calcMedPond(float nota1,float nota2,float nota3){
    return (nota1 * 5 + nota2 * 3 + nota3 * 2) / 10;
}

int main(){
    float nota1,nota2,nota3;
    char op, letra;

    do{
    printf("Digite as tres notas do aluno:");
    scanf("%f %f %f",&nota1, &nota2, &nota3);

    printf("Informe a operacao desejada: \n");
    printf("A - Media aritmetica.\n");
    printf("P - Media ponderada.\n");
    scanf("%s",&letra);
    switch(letra){
        case 'a':
        case 'A':
            calcMedArit(nota1, nota2, nota3);
            printf("Media aritmetica: %.2f\n", calcMedArit(nota1, nota2, nota3));
            break;

        case 'p':
        case 'P':
            calcMedPond(nota1, nota2, nota3);
            printf("Media ponderada: %.2f\n", calcMedPond(nota1, nota2, nota3));
            break;
        default:
            printf("Letra invalida!\n");
    }

    printf("Deseja conferir de outro aluno? S / N\n");
    scanf("%s", &op);
    }while(op == 's' || op == 'S');

        return 0;
    }
