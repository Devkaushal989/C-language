//3. ar[]={11,22,33,44,55}
//find which one is larger number in given number.
#include <stdio.h>
int findLargerNumber(int arr[], int size);
int main() {
    int arr[] = {11, 22, 33, 44, 55};
    int size = sizeof(arr) / sizeof(arr[0]);
    int largerNum = findLargerNumber(arr, size);
    printf("Larger number in the array is: %d\n", largerNum);

    return 0;
}

int findLargerNumber(int arr[], int size) {
    int largerNum = arr[0];
    int i;
    for (i = 1; i < size; i++) {
        if (arr[i] > largerNum) {
            largerNum = arr[i];
        }
    }

    return largerNum;
}
