#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct aluno{
        char nome[102];
        int ra;
        float P1, P2;
        float media;
    }Aluno;

int main(){
    int n, a;
    scanf("%d",&n);

    Aluno *alunos;

    alunos= (Aluno*) malloc(n*sizeof(Aluno));

    for(a=0;a<n;a++){
        getchar();
        fgets(alunos[a].nome,102,stdin);
        alunos[a].nome[strlen(alunos[a].nome)-1]='\0';
        scanf("%d",&alunos[a].ra);
        scanf("%f",&alunos[a].P1);
        scanf("%f",&alunos[a].P2);
        alunos[a].media=(alunos[a].P1+alunos[a].P2)/2;

    }

    for(a=0;a<n;a++){
    printf("%d\t%s\t%.2f\n",alunos[a].ra,alunos[a].nome,alunos[a].media);
    }
    return 0;
}
