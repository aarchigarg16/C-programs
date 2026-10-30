//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], s2[100], temp[200];
    int i, j, len1, len2;

    scanf("%s", s1);
    scanf("%s", s2);

    len1 = strlen(s1);
    len2 = strlen(s2);

    if (len1 != len2)
    {
        printf("Not rotation");
        return 0;
    }

    strcpy(temp, s1);
    strcat(temp, s1);

    if (strstr(temp, s2) != NULL)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}
