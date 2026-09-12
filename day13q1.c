// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/

#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    char operator;
    scanf(" %c", &operator);
    int sum,diff,product,divide,modulus;
    sum=a+b;
    diff=a-b;
    product=a*b;
    divide=a/b;
    modulus=a%b;
    switch(operator)
    {
        case '+':
        printf("%d",sum);
        break;
        case '-':
        printf("%d",diff);
        break;
        case '*':
        printf("%d",product);
        break;
        case '/':
        printf("%d",divide);
        break;
        case'%':
        printf("%d",modulus);
        break;
    } 
    return 0;
}