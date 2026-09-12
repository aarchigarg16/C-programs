//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include<stdio.h>

int main(){
    int n,r=0,org;
    scanf("%d",&n);
    org=n;
    while(n!=0){
        r=r*10+n%10;
        n=n/10;
    }
    if(org==r){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
    return 0;
}