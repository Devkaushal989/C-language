//1. int ar[]={11,22,33,44,55}
//display all odd in user defined function
#include <stdio.h>
int i;
void displayOdd(int arr[], int size);
int main() {
    int arr[] = {11, 22, 33, 44, 55};
    int size = sizeof(arr) / sizeof(arr[0]);
    displayOdd(arr, size);
    return 0;
}
void displayOdd(int arr[], int size) {
    printf("Odd numbers in the array are:\n");
    for (i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}
