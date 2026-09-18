//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/

#include<stdio.h>
int main(){
    int n,i,j;
    float sum=1;
    scanf("%d",&n);
    j=4;
    for(i=3;i<=2*n-1;i=i+2){
        sum=sum+(float)i/j;
        j=j+2;
    }
    printf("%f",sum);
    return 0;

}