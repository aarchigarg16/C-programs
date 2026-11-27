//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/

#include <stdio.h>

int main() {
    FILE *file = fopen("students.txt", "w");
    if (file == NULL) {
        perror("Could not open file");
        return 1;
    }

    int count;
    printf("Number of students: ");
    scanf("%d", &count);

    char name[100];
    int roll;
    float marks;

    for (int i = 0; i < count; i++) {
        printf("Enter name, roll number, and marks: ");
        scanf("%99s %d %f", name, &roll, &marks);
        fprintf(file, "%s %d %.2f\n", name, roll, marks);
    }
    fclose(file);

    file = fopen("students.txt", "r");
    if (file == NULL) {
        perror("Could not open file");
        return 1;
    }

    while (fscanf(file, "%99s %d %f", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %.0f\n", name, roll, marks);
    }

    fclose(file);
    return 0;
}
