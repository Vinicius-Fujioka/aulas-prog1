#include<stdio.h>
int main()
{

    float num1, num2, num3;
    char simb;

    scanf("%f%c%f", &num1, &simb, &num2);

    if (simb == '+'){
        num3 = num1+num2;
        printf("%.3f+%.3f=%.3f\n",num1,num2,num3);
    }
    else{
        if (simb == '-'){
        num3 = num1-num2;
        printf("%.3f-%.3f=%.3f\n",num1,num2,num3);
        }
        else{
        if (simb == '*'){
        num3=num1*num2;
        printf("%.3f*%.3f=%.3f\n",num1,num2,num3);
        }
        else{
        if(simb == '/'){
        num3=num1/num2;
        printf("%.3f/%.3f=%.3f\n",num1,num2,num3);
        }

        else{
        printf("Operador invalido\n");
        }}}}



}

