#include<stdio.h>
int fact(int n){
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
    sum= fact(1)/1 + fact(2)/2 +fact(3)/3 +fact(4)/4+fact(5)/5;
    printf("%d\n", sum);
    return 0;
}