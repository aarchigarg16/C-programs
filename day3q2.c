#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    printf(" before swap %d %d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\n after swap %d %d",a,b);
    return 0;
}