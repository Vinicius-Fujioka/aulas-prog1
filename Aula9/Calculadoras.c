#include<stdio.h>
#include<math.h>

float soma (float,float,char);
float subtracao (float,float,char);
float multiplicacao (float,float,char);
float divisao (float,float,char);
float potencia (float,float,char);

int main(){
    float n1,n2;
    char x;

    scanf("%f%c%f", &n1, &x, &n2);

    if(x=='+'){
        printf("%.3f\n", soma(n1,n2,x));
    }
    if(x=='-'){
        printf("%.3f\n", subtracao(n1,n2,x));
    }
    if(x=='*'){
        printf("%.3f\n", multiplicacao(n1,n2,x));
    }
    if(x=='/'){
        printf("%.3f\n", divisao(n1,n2,x));
    }
    if(x=='^'){
        printf("%.3f\n", potencia(n1,n2,x));
    }

    return 0;
}
float soma (float n1,float n2,char x){
    float soma;
    soma = n1+n2;
    return soma;
}
float subtracao (float n1,float n2,char x){
    float subtracao;
    subtracao = n1-n2;
    return subtracao;
}
float multiplicacao (float n1,float n2,char x){
    float multiplicacao;
    multiplicacao = n1*n2;
    return multiplicacao;
}
float divisao (float n1,float n2,char x){
    float divisao;
    divisao = n1/n2;
    return divisao;
}
float potencia (float n1,float n2,char x){
    float potencia;
    potencia = pow(n1,n2);
    return potencia;
}
