#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i;
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	int* p = (int*) malloc(n*sizeof(int));
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	printf("Enter array elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ,", *(p+i));
	}
	return 0;
	
}
