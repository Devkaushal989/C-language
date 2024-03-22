//Write a program in C to find the maximum number between two numbers using a pointer.
#include <stdio.h>

void find_max(int *p1, int *p2, int **max) {
    if (*p1 > *p2) {
        *max = p1;
    } else {
        *max = p2;
    }
}

int main() {
    int p1, p2;
    int *max;

    printf("Enter first number: ");
    scanf("%d", &p1);

    printf("Enter second number: ");
    scanf("%d", &p2);

    find_max(&p1, &p2, &max);

    printf("Maximum number is: %d\n", *max);

    return 0;
}