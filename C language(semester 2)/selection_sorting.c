//2.Selection sorting
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the size of array: \n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array: \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Unsorted array:\n");
    for(i=0;i<n;i++)
	{
        printf("%d ",a[i]); 
    }
    for(i=0;i<n-1;i++)
	{
        int min=i;
        for(j=i+1;j<n;j++)
		{
            if(a[j]<a[min])
			{
                min=j;
            }
        }
        int temp=a[i];
            a[i]=a[min];
            a[min]=temp;
    }
    
    printf("\nSorted array:\n");
     for(i=0;i<n;i++)
	{
        printf("%d ",a[i]);
    }
}
