//Q120: Write a program to take a string input. Change it to sentence case.

/*
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/

#include <stdio.h>

int main() {
    int n, k;

    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);

    if (n <= 0) {
        return 0;
    }

    k %= n;

    for (int i = 0; i < n; i++) {
        int new_index = (i + k) % n;
        printf("%d", a[(i - k + n) % n]);
        if (i < n - 1) {
            printf(" ");
        }
    }

    return 0;
}
