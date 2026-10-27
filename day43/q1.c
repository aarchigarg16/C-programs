//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/


#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, len;
    scanf("%s", s);

    len = strlen(s);

    for (i = len - 1; i >= 0; i--) {
        printf("%c", s[i]);
    }

    return 0;
}
