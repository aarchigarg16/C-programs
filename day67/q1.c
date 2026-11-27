//Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/

#include <stdio.h>
int main(){
    int m, n;

    if (scanf("%d %d", &m, &n) != 2 || m < 0 || n < 0) {
        return 0;
    }

    int a[m], b[n];

    for (int i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    int i = 0, j = 0;
    int first = 1;

    while (i < m && j < n) {
        int value;

        if (a[i] <= b[j]) {
            value = a[i++];
        } else {
            value = b[j++];
        }

        if (!first) printf(" ");
        printf("%d", value);
        first = 0;
    }

    while (i < m) {
        if (!first) printf(" ");
        printf("%d", a[i++]);
        first = 0;
    }

    while (j < n) {
        if (!first) printf(" ");
        printf("%d", b[j++]);
        first = 0;
    }

    printf("\n");
    return 0;
}
