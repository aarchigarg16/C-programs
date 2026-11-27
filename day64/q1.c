//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/

#include <stdio.h>
#include <string.h>

int main(){
    char s[10000];

    if (scanf("%9999s", s) != 1) {
        return 0;
    }

    int last_seen[256];
    for (int i = 0; i < 256; i++) {
        last_seen[i] = -1;
    }

    int start = 0;
    int max_length = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)s[i];

        if (last_seen[ch] >= start) {
            start = last_seen[ch] + 1;
        }

        last_seen[ch] = i;

        int length = i - start + 1;
        if (length > max_length) {
            max_length = length;
        }
    }

    printf("%d\n", max_length);
    return 0;
}
