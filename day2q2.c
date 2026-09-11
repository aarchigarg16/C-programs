#include<stdio.h>
int main(){
    float r,area,circumference;
    scanf("%f",&r);
    const float pi = 3.14;
    area = pi*r*r;
    circumference = 2*pi*r;
    printf("%f %f",area,circumference);
    return 0;
}