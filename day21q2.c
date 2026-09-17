//Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/

#include<stdio.h>
int main(){
    int n,sum=0,i,org;
    scanf("%d",&n);
    org=n;
    for(i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(org==sum){
        printf("perfect no");
    }
    else{
        printf(" not perfect no");
    }
    return 0;
}
