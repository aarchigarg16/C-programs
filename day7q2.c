//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/

#include<stdio.h>
int main(){
    char xyz;
    scanf("%c",&xyz);
    if(xyz=='a'||xyz=='e'||xyz=='i'||xyz=='o'||xyz=='u' ||
        xyz=='A'||xyz=='E'||xyz=='I'||xyz=='O'||xyz=='U')
    {
        printf("vowel");
    }
    else{
        printf("consonant");
    }
    return 0;
}