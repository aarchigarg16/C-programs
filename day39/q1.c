//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/

#include <stdio.h>
int main(){
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int matrix[100][100];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < rows && i < cols; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                printf("False\n");
                return 0;
            }
        }
    }

    printf("True\n");
    return 0;
}
