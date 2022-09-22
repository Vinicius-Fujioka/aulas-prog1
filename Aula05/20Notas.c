#include <stdio.h>
int main()
{
    float nota[20],x;
    int i;
        for (i=0; i < 20; i++) {
    scanf("%f",&nota[i]);
        }
        while(1) {
    scanf("%f",&x);
    if (x<0)
    break;

    nota[20] = x;
    i = 0;
        while (nota[i] != x)
    i++;
        if (i <20)
    printf("existe\n");

        else
    printf("nao existe\n");
            }
    return 0;
}
