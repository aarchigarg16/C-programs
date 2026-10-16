//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/


#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max,smax;
    max=arr[0];
    smax=arr[0];
    for(int i=0;i<n;i++){
        if (max<arr[i]){
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(smax!=max && arr[i]<max){
            smax=arr[i];
        }
    }
    printf("%d",smax);
    return 0;
}
