#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int linhas, colunas, a, b;
    float** matriz;
    float** transposta;

    scanf("%d %d", &linhas, &colunas);

    transposta=(float**)malloc(colunas*sizeof(float*));

    for(a=0;a<colunas;a++){
        transposta[a]=(float*)malloc(linhas*sizeof(float));
    }

    matriz=(float**)malloc(linhas*sizeof(float*));

    for(a=0;a<linhas;a++){
        matriz[a]=(float*)malloc(colunas*sizeof(float));
    }

    for(a=0;a<linhas;a++){
        for(b=0; b<colunas;b++){
            scanf("%f",&matriz[a][b]);
        }
    }

    for(a=0;a<colunas;a++){
        for(b=0;b<linhas;b++){
            transposta[a][b]=matriz[b][a];
        }
    }
    int aux=0;

    for(a=0;a<colunas;a++){
        for(b=0;b<linhas;b++){
        if(transposta[b][a]!=matriz[b][a]){
            aux=-1;
            break;
            }
        }
        if(aux==-1){
            printf("Nao eh simetrica\n");
            break;
        }
    }
    if(aux==0){
            printf("Eh simetrica\n");
        }

    for(a=0;a<linhas;a++){
    free(matriz[a]);
    }
    free(matriz);
    return 0;
    }
