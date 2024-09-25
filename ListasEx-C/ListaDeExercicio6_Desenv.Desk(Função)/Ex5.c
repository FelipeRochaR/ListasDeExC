//EX5.
#include <stdio.h>

float converterUnidades(float m, float *dm, float *cm, float *mm){

    *dm = m * 10;

    *cm = m * 100;

    *mm = m * 1000;
}

int main() {
    float m, dm, cm, mm;
    char op;
    do{
    printf("Digite o valor em metros: ");
    scanf("%f", &m);

    converterUnidades(m, &dm, &cm, &mm);

    printf("%.2f metros equivalem a:\n", m);
    printf("%.2f decimetros\n", dm);
    printf("%.2f centimetros\n", cm);
    printf("%.2f milimetros\n", mm);

    printf("Deseja verificar outro numero? S / N\n");
    scanf("%s",&op);
    }while(op == 's' || op == 'S');

    return 0;
}
