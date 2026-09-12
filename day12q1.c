/*
Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.

Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/

#include<stdio.h>
int main(){
    int fine1,fine2,fine3;
    int days;
    scanf("%d",&days);
    if(days<=5){
        fine1= days*2;
        printf("%d",fine1);
    }
    else if(days<=10){
        fine2=5*2+(days-5)*4;
        printf("%d",fine2);
    }
    else if(days<=30){
        fine3=5*2+5*4+(days-10)*6;
        printf("%d",fine3);
    }
    else
    printf("membership cancelled");
    return 0;
}