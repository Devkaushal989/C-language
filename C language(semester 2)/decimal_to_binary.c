#include<stdio.h>
int binary(int number)
{
    int a[32],i=0, j;
    while(number!=0)
    {
        a[i] = number%2;
        i++;
        number = number/2;
    }
    printf("Binary number of a given number: ");
    for(j= i-1;j>=0;j--)
    {
        printf("%d",a[j]);

    }
}
int main()
{
    int number;
    printf("Enter the number you want to convert: ");
    scanf("%d",&number);
    binary(number);
    return 0;
}
