//EX3.
#include<stdlib.h>

float calcDelta(float a, float b, float c){
    float delta;
    delta = (b * b) - (4 * a * c);
    return delta;
}

int main(){
    float a, b, c, delta;
    char op;

    do{
    printf("Informe os valores A, B e C: ");
    scanf("%f %f %f",&a,&b,&c);

    delta = calcDelta(a,b,c);

    printf("O valor de delta eh: %.2f\n", delta);

    printf("Deseja verificar outro numero? S / N\n");
    scanf("%s",&op);
    }while(op == 's' || op == 'S');

}
