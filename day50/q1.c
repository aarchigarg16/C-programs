//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/

#include <stdio.h>
int main(){
    char date[20];
    scanf("%s", date);

    date[3] = 'A';
    date[4] = 'p';
    date[5] = 'r';

    printf("%c%c-%c%c%c-%c%c%c%c",
           date[0], date[1],
           date[3], date[4], date[5],
           date[6], date[7], date[8], date[9]);

    return 0;
}
