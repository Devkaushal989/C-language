#include<stdio.h>
int main()
{
//	int a,b;
//	printf("Enter the number:");
//	scanf("%d",&a);
//	printf("Enter the second number:");
//	scanf("%d",&b);
    int a=10;
    int *p=&a;
    printf("Address of a=%d\n", p);
    p=p-3;
    printf("Address of a=%d\n", p);
}
