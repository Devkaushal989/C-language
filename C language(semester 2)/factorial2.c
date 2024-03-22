#include<stdio.h>
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int sum=0;
    for(int i=1;i<=5;i++)
    sum=sum+fact(i)/i;
    printf("%d",sum);
    return  0;
}