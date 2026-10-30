//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/

#include <stdio.h>
int main(){
    char s1[100], s2[100];
    int i, count[256] = {0};

    scanf("%s", s1);
    scanf("%s", s2);

    for (i = 0; s1[i] != '\0'; i++)
    {
        count[(unsigned char)s1[i]]++;
    }

    for (i = 0; s2[i] != '\0'; i++)
    {
        count[(unsigned char)s2[i]]--;
    }

    for (i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");

    return 0;
}
