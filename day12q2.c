/*Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit

Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/

#include<stdio.h>
int main(){
    int unit;
    scanf("%d",&unit);
    int bill1,bill2,bill3,bill4;
    if(unit<=100){
        bill1= unit*5;
        printf("%d",bill1);
    }
    else if(unit<=200){
        bill2= 100*5+(unit-100)*7;
        printf("%d",bill2);
    }
    else if(unit<=300){
        bill3= 100*5+100*7+(unit-200)*10;
        printf("%d",bill3);
    }
    else{
        bill4= 100*5+100*7+100*10+(unit-300)*12;
        printf("%d",bill4);
    }
    return 0;
}