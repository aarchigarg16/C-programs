//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/


#include <stdio.h>

int main() {
    int n, key, i;
    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);

    int l = 0, r = n - 1, res = -1;

    while (l <= r) {
        int m = l + (r - l) / 2;

        if (a[m] == key) {
            res = m;
            break;
        }
        else if (a[m] < key)
            l = m + 1;
        else
            r = m - 1;
    }

    if (res == -1)
        printf("-1\n");
    else
        printf("Found at index %d\n", res);

    return 0;
}

