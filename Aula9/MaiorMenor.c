#include<stdio.h>
int N;
void maiormenor(int vetor[]){
    int a, maior, menor;
    maior=0;
    menor=9999;

    for(a=0;a<N;a++){
        if(vetor[a]>maior){
            maior = vetor[a];
        }
    }
    for(a=0;a<N;a++){
        if(vetor[a]<menor){
            menor = vetor[a];
        }
    }
    vetor[0]=maior;
    vetor[1]=menor;
}
int main(){
    int a;
    scanf("%d",&N);
    int vetor[N];

    for(a=0;a<N;a++){
        scanf("%d",&vetor[a]);
    }

    maiormenor(vetor);

    printf("maior valor: %d\n", vetor[0]);
    printf("menor valor: %d\n", vetor[1]);

    return 0;
}
