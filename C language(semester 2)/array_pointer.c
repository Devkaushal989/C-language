//Write a program in c to store n elements in an array and print the elements using a pointer.
#include<stdio.h>
int main()
{
    int a[5] = {1,2,3,4,5};
    int *p=a;
    for(int i=0;i<5;i++)
    {
        printf("%d\n", *(p+i));
    }
}