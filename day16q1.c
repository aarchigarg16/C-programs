//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/

#include<stdio.h>
int main(){
    int dec,binary=0,n,place=1;
    scanf("%d",&dec);
    while(dec!=0){
        n=dec%2;
        binary= binary +n*place;
        place = place*10;
        dec=dec/2;
    }
    printf("%d",binary);
    return 0;
}