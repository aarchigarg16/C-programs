// Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/

#include<stdio.h>
int main(){
    int  i,sum,d;
    float n;
    scanf("%f",&n);
    d=1;
    i=1;
    sum=n/2*(2*i+(n-1)*d);
    printf("%d",sum);
    return 0;
}