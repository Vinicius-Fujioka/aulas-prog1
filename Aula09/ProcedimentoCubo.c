#include<stdio.h>
#include<math.h>
#define C 10

void f1(int A[C], int B[C]){
        int a;
        for(a=0;a<10;a++){
        B[a]=pow(A[a],3);
        }
        for(a=0;a<10;a++){
            printf("%d\n", B[a]);
        }
    }

int main(){

    int A[C], B[C], a;

        for(a=0;a<10;a++){
            scanf("%d",&A[a]);
        }

    f1(A,B);

    return 0;
    }
