//Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2

*/


#include <stdio.h>
int main(){
    int n, k;

    printf("Enter the array size: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array size must be positive.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("k must be between 1 and %d.\n", n);
        return 1;
    }

    for (int start = 0; start <= n - k; start++) {
        int max = arr[start];

        for (int i = start + 1; i < start + k; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }

        if (start > 0) {
            printf(" ");
        }
        printf("%d", max);
    }

    printf("\n");
    return 0;
}
