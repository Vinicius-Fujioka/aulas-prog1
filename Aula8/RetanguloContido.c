#include<stdio.h>

int main(){
    struct ponto{
        int x, y;
        }rie1,rsd1,rie2,rsd2;
    scanf("%d %d",&rie1.x, &rie1.y);
    scanf("%d %d",&rsd1.x, &rsd1.y);
    scanf("%d %d",&rie2.x, &rie2.y);
    scanf("%d %d",&rsd2.x, &rsd2.y);

    if((rie1.x <= rie2.x) && (rie1.y <= rie2.y) && (rsd2.x <= rsd1.x) && (rsd2.y <= rsd1.y)){
        printf("o segundo retangulo esta contido no primeiro\n");
    }else{
        printf("o segundo retangulo nao esta contido no primeiro\n");
    }

    return 0;
}
