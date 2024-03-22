//Tale recursion
#include<stdio.h>
int fact(int n)
{
	if(n==1)
	return 1;   
	count(n-1);
	printf("%d\n", n);
}
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	count(n);
}
