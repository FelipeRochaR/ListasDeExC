#include<stdio.h>

int main(){
    int A[10], B[10], C[10], i, j, w=0, flag=0, k;
    srand(time(NULL));
    for(i=0;i<10;i++){
        A[i]=1+rand()%10;
        B[i]=1+rand()%10;
        C[i]= 0;
    }
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(A[i] == B[j]){
                for(k=0;k<=w;k++){
                    if(A[i] == C[k]){
                        flag = 1;
                    }
                }
                if(flag == 0){
                    C[w] = A[i];
                    w++;
                }
                flag=0;
            }
        }
    }
    printf("\nVetor A\n");
    for(i=0;i<10;i++){
        printf("%i ", A[i]);
    }
    printf("\nVetor B\n");
    for(i=0;i<10;i++){
        printf("%i ", B[i]);
    }
    printf("\nVetor C\n");
    for(i=0;i<10;i++){
        printf("%i ", C[i]);
    }
}
