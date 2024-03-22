#include <stdio.h>
int main() {
    int n, i;
    int arr[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    int *ptr = arr;
    for (i = 0; i < n; i++) {
        sum += *(ptr + i);
    }

    printf("Sum of the elements is: %d\n", sum);

    return 0;
}
