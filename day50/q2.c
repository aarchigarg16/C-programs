//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/


#include <stdio.h>
int main(){
    char s[100];
    int i, j, k;

    scanf("%s", s);

    for(i = 0; s[i] != '\0'; i++)
    {
        for(j = i; s[j] != '\0'; j++)
        {
            for(k = i; k <= j; k++)
            {
                printf("%c", s[k]);
            }

            printf(",");
        }
    }

    return 0;
}
