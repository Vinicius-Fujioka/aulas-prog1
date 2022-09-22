#include<stdio.h>
int main(){
    float imc;
    struct corpo{
    float altura, peso;
    char nome;
    }corpo;

    scanf("%f", &corpo.altura);
    scanf("%f", &corpo.peso);
    scanf("%s", &corpo.nome);

    imc = corpo.peso / (corpo.altura*corpo.altura);

    printf("%.3f\n", imc);
    return 0;
    }
