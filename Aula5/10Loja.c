#include<stdio.h>
int main(){
     int x,y,z;
     float valor[10],quantidade[10],faturamento=0,soma1=0 ;

    for (x = 0; x < 10; x++)
    {
        scanf("%f", &quantidade[x]);
    }

     for (y = 0; y < 10; y++)
    {
        scanf("%f", &valor[y]);
    }

     for (z = 0; z < 10; z++)
    {
        soma1 += quantidade[z];
        faturamento += quantidade[z] * valor[z];
    }

    printf("O lucro foi de  %.3f e a quantidade de produtos vendidos foi de %.0f\n",faturamento,soma1);
    return 0;
}
