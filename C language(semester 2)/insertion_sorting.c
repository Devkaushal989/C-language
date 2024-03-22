#include <stdio.h>
int main()
{
    int a[] = {78, 23, 45, 8, 32, 36};
    int n = 5, i, j, temp;
    printf("Array before sorting:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    for (i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
    printf("\nArray after sorting: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
