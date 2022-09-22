#include<stdio.h>

float volumeesfera(float raio,float pi){
    float volume, q;
    q=1.33333333333;
    volume = q * (pi * raio * raio * raio);
    return volume;
}

int main(){
    float raio, pi = 3.14159;
    scanf("%f", &raio);
    printf("%.2f\n", volumeesfera(raio,pi));



    return 0;
}
