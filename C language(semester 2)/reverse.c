#include<stdio.h>
int main()
{
    int a[3] = {'a','b','c'};
    int *p=a;
    for(int i=2;i>=0;i--)
    {
        printf("%c\n", *(p+i));
    }
}