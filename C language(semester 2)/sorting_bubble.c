//Sorting in array
//1.Bubble sort
#include<stdio.h>
int main()
{
	int i,j,n=0	;
	printf("Enter the size of array: \n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of array: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("=>Unsorted array<=\n");
	for(i=0;i<n;i++)
	{
	    printf("%d  ",a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
            	int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\n=>Sorted array<=\n");
	for(i=0;i<n;i++)
	{
	    printf("%d  ",a[i]);
	}
}
