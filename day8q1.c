// Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/
#include<stdio.h>
int main(){
    char xyz;
    scanf("%c",&xyz);
    if(xyz >='A' && xyz<='Z'){
        printf("uppercase alphabet");
    }
    else if(xyz>='a' && xyz<='z'){
        printf("lowercase alphabet");
    }
    else if(xyz>='0' && xyz<='9')
    printf("digit");
    else
    printf("its a special character");
    return 0;
}