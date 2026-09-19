//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/


#include <stdio.h>
int main()
{
    int n, r, x;
    scanf("%d", &n);
    r = n % 10;
    x = n;
    while (x >= 10){
        x = x / 10;
    }
    printf("%d%d%d", r, (n % 1000) / 10, x);
    return 0;
}