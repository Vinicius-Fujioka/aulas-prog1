#include<stdio.h>
int main(){
    int v1[10], v2[10], i, n, j;

     for (i=0; i < 10; i++) {
    scanf("%d",&v1[i]);
        }

     for (n=0; n < 10; n++) {
    scanf("%d",&v2[n]);
        }

    for(j=0;j<10;j++){
        printf("%d|%d|",v1[j],v2[j]);

    }
    printf("\n");
}
