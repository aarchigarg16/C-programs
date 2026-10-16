//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/

#include <stdio.h>
int main(){
    int r,c;
    scanf("%d %d", &r,&c);

    int matrix[r][c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j <c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int isSymmetric = 1; 
    if (r != c) {
        isSymmetric = 0;
    } 
    else {
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (matrix[i][j] != matrix[j][i]) {
                    isSymmetric = 0;
                }
            }
        }
    }

    if (isSymmetric == 1) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
