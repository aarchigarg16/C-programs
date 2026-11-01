//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>
int main(){
    char s[100];
    int i, j, last = 0;

    fgets(s, sizeof(s), stdin);

    for(i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == ' ')
            last = i + 1;
    }

    for(i = 0; i < last - 1; i++)
    {
        if(i == 0 || s[i-1] == ' ')
        {
            printf("%c.", s[i]);
        }
    }

    for(j = last; s[j] != '\0' && s[j] != '\n'; j++)
    {
        printf("%c", s[j]);
    }

    return 0;
}
