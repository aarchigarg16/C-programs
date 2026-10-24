//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/


#include <stdio.h>
int main (){

    int rows, cols;
    int matrix[100][100];
    scanf("%d %d", &rows, &cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int diagonal = 0; diagonal < rows + cols - 1; diagonal++) {
        for (int i = 0; i < rows; i++) {
            int j = diagonal - i;

            if (j >= 0 && j < cols) {
                printf("%d ", matrix[i][j]);
            }
        }
    }

    return 0;
}
