//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char s[200];
    int i, start = 0, end, j;

    fgets(s, sizeof(s), stdin);

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ' || s[i] == '\n' || s[i] == '\0')
        {
            end = i - 1;

            for (j = end; j >= start; j--)
            {
                printf("%c", s[j]);
            }

            if (s[i] == ' ')
                printf(" ");

            start = i + 1;
        }
    }

    return 0;
}
