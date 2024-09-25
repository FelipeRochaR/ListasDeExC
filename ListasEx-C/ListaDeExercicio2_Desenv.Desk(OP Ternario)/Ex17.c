//Ex17.
//Bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    float horas_mes, salario_h, salario_t;
    float horas_extras = 0, valor_hextra;
    printf("Informe suas horas mensais trabalhadas: ");
    scanf("%f", &horas_mes);
    printf("Informe seu salario por hora: R$ ");
    scanf("%f", &salario_h);
    if (horas_mes > 160){
        horas_extras = horas_mes - 160;
        valor_hextra = (salario_h * 1.5) * horas_extras;
    }
    salario_t = (salario_h * horas_mes) + valor_hextra;
    printf("O salario total do funcionario e: R$ %.2f\n", salario_t);

    system("pause");
}
