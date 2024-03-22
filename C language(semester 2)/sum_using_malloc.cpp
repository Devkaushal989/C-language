//Calculate the sum of n numbers given by user.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,sum=0;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	
	int *ptr = (int*) calloc(5*sizeof(int));
	for(int i=0;i<5;i++)
	{
        scanf("%d", ptr+i);
        sum += *(ptr+i);
	}
	printf("Sum =%d",sum);
	return 0;
}
