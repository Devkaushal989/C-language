//Tale recursion
#include<stdio.h>
int fact(int n)
{
	if(n==1)
	return 1;
//	print(n-1);
//	printf("%d\n",n);

	else
	return n*fact(n-1);
}
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("Factorial = %d",fact(n));
}
