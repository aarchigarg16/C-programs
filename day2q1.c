#include<stdio.h>
int main(){
    int l,b,area,perimeter;
    scanf("%d %d",&l,&b);
    area = l*b;
    perimeter = 2*(l+b);
    printf("%d %d",area,perimeter);
    return 0;
}