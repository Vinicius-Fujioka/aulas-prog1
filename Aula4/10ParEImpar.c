#include<stdio.h>
int main()
{
    int par,num,n;
    par=0;

    for(n=1;n<=10;n++){
        scanf("%d", &num);
        if(num%2==0){
            par=par+1;
        }
    }
    printf("%d pares, %d impares\n", par, 10-par);





}
