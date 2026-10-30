//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>
int main(){
    char s[200], word[100], longest[100];
    int i = 0, j = 0, max = 0;

    fgets(s, sizeof(s), stdin);

    while (1)
    {
        if (s[i] != ' ' && s[i] != '\n' && s[i] != '\0')
        {
            word[j] = s[i];
            j++;
        }
        else
        {
            word[j] = '\0';

            if (j > max)
            {
                max = j;
                for (int k = 0; k <= j; k++)
                {
                    longest[k] = word[k];
                }
            }

            j = 0;

            if (s[i] == '\0' || s[i] == '\n')
                break;
        }

        i++;
    }

    printf("%s", longest);

    return 0;
} 
