#include<stdio.h>

void soma(int *e,int *f,int c,int d){

        *e=*e+c;
        *f=*f+d;
}

void mult(int *e,int *f,int c,int d){
        int z=*e, w=*f;
        *e=(z*c)-(w*d);
        *f=(z*d)+(w*c);
}
int main(){
    int a, b, c, d, *e, *f;
    char op;

    scanf("%d %d %c %d %d",&a, &b, &op, &c, &d);

    e=&a;
    f=&b;

        if(op=='+'){
            soma(e,f,c,d);
            printf("%d + %di\n", *e, *f);
        }else{
            mult(e,f,c,d);
            printf("%d + %di\n", *e, *f);
        }
    return 0;
}
