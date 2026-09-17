//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include<stdio.h>
int main(){
    int n,r,i,fact,sum=0,org;
    scanf("%d",&n);
    org=n;
    while(n!=0){
        r=n%10;
        fact=1;
        for(i=1;i<=r;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(org == sum){
        printf(" strong number");
    }
    else{
        printf("not a strong number");
    }
    return 0;
}