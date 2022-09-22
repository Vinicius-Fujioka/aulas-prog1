#include <stdio.h>
#include <string.h>
#define N 20
#include<ctype.h>

int main() {
    char palavra[N];
    scanf("%s", palavra);
    int tamanho = strlen(palavra), a;
    for(a=0;palavra[a];a++){
        palavra[a]=tolower(palavra[a]);
    }
    for (a = 0; a < tamanho / 2; a++) {
        if (palavra[a] != palavra[tamanho - a - 1]) {
            printf("Esta palavra nao e um palindromo\n");
            return 0;
        }
    }
    printf("Esta palavra e um palindromo\n");
           return 0;
}
