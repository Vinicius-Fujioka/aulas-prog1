#include<stdio.h>
#include<math.h>

float media (float,float,char);

int main(){

    char x;
    float n1, n2;
    scanf("%c", &x);
    scanf("%f %f", &n1, &n2);
    printf("%.3f\n", media(n1,n2,x));

    return 0;
    }

float media(float n1, float n2, char x){
    float media;
    if(x=='A'){
        media = ((n1+n2)/2);
    }
    if(x=='B'){
        media = sqrt(n1*n2);
    }
return media;
}
