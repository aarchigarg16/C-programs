/* Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.


Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/

#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    if(i<=100 && i>=90)
    printf("grade A");
    else if(i<=89 && i>=80)
    printf(" grade B");
    else if(i<=79 && i>=70)
    printf(" grade C");
    else if(i<=69 && i>=60)
    printf(" grade D");
    else
    printf(" grade F");
    return 0;
}