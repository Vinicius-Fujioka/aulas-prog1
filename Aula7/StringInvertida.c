#include<stdio.h>
#include<string.h>
int main(){
    char palavra[81];
    int a;
    fgets(palavra,81,stdin);

    for(a=strlen(palavra)-2;a>=0;a--){
        printf("%c", palavra[a]);
    }
    printf("\n");











    return 0;
}
