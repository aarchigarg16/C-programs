//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/

#include <stdio.h>
#include <stdlib.h>

#define TABLE_SIZE 200003

typedef struct Node {
    int value;
    struct Node *next;
} Node;

static unsigned int hash_value(int value) {
    return (unsigned int)value % TABLE_SIZE;
}

int main(){
    int n;

    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    Node *table[TABLE_SIZE] = {0};

    for (int i = 0; i < n; i++) {
        int value;
        if (scanf("%d", &value) != 1) {
            return 0;
        }

        unsigned int index = hash_value(value);

        for (Node *node = table[index]; node != NULL; node = node->next) {
            if (node->value == value) {
                printf("%d\n", value);
                return 0;
            }
        }

        Node *node = malloc(sizeof(*node));
        if (node == NULL) {
            return 1;
        }
        node->value = value;
        node->next = table[index];
        table[index] = node;
    }

    return 0;
}
