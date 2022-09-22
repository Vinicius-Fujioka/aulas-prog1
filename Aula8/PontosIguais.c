#include<stdio.h>
#include<math.h>
int main(){
    float raiz;
    struct ponto{
        float x, y;
        }ponto1, ponto2;


    scanf("%f %f", &ponto1.x, &ponto1.y);
    scanf("%f %f", &ponto2.x, &ponto2.y);


    raiz = sqrt(pow((ponto2.x - ponto1.x),2) + pow((ponto2.y - ponto1.y),2));

    if(raiz<0.0000001){
        printf("os pontos sao iguais\n");
    }else{
        printf("os pontos nao sao iguais\n");
    }
    return 0;
}
