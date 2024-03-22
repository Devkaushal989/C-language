//Tale recursion
#include<stdio.h>
int count(int n)
{
	if(n==0)
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
