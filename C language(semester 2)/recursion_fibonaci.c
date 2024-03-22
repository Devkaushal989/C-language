//nth term of fibonacci series
#include<stdio.h>
int fibonaci(int n)
{
	if(n==0)
	return 0;
	if(n==1)
	return 1;
	else 
	return fibonaci(n-1) + fibonaci(n-2);
}
int main()
{
	int n;
	printf("Enter a number:\n");
	scanf("%d",&n);
	printf("nth term = %d",fibonaci(n-1));
}
