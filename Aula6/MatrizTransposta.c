#include<stdio.h>
#define N 20
int main(){
    int matriz [N][N], transposta [N][N], a, b, nlin, ncol;

    scanf("%d %d", &nlin,&ncol);

    for(a=0;a<nlin;a++){
        for(b=0;b<ncol;b++){

            scanf("%d", &matriz [a][b]);
        }
    }
     for (a = 0; a < nlin; a++) {
        for(b = 0; b < ncol; b++) {
            transposta[b][a] = matriz[a][b];
        }
    }

    for (a = 0; a < ncol; a++) {
        for(b = 0; b < nlin; b++) {
            printf("%d ",transposta[a][b]);
        }
        printf("\n");
    }




    return 0;
}
