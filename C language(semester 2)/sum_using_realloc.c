//Make an array of size n1 using calloc() then resize the size of the same by n2 using realloc() and the check
//the address of allocated memeory
// Syntax of--realloc()--int *p = (int*) realloc(p,n*sizeof(int));
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n1,n2,i;
	printf("Enter number of elements:");
	scanf("%d",&n1);
	
	int *p1= (int*) calloc(n1,sizeof(int));
	printf("Allocated address by calloc:\n");
	for(i=0;i<n1;i++)
	{
		printf("%d\n",p1+i);
	}
	printf("Enter number of elements:");
	scanf("%d",&n2);
	printf("Allocated address by realloc:\n");
	int *p2 = (int*) realloc(p1,n2*sizeof(int));
	for(i=0;i<n2;i++)
	{
		printf("%d\n",p2+i);
	}
	return 0;
}
