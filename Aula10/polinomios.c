#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    int ngrau, a, x;
    float resultado=0;
    float* coeficiente;

    scanf("%d",&ngrau);

    coeficiente=(float*)malloc((ngrau+1)*sizeof(float));

    if(coeficiente==NULL){
        printf("Memoria insuficiente\n");
        return 1;
    }
    for(a=0;a<ngrau+1;a++){
        scanf("%f", &coeficiente[a]);
    }
    scanf("%d",&x);

    for(a=0;a<ngrau+1;a++){
        resultado += coeficiente[a] * pow(x,a);
    }

    printf("%.2f\n",resultado);
    free(coeficiente);

    return 0;
    }
