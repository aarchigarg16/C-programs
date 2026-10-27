//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/


#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    int i, len, flag = 1;

    scanf("%s", s);
    len = strlen(s);

    for (i = 0; i < len / 2; i++) {
        if (s[i] != s[len - 1 - i]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
