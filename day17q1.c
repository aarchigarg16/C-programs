//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include<stdio.h>
int main(){
    int r,n,org,sum=0;
    scanf("%d",&n);
    org=n;
    while(n!=0){
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;

    }
    if(sum==org){
        printf("armstrong");
    }
    else{
        printf("not armstrong");
    }
    return 0;
}