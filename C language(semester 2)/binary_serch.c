#include<stdio.h>
int Binarysearch(int arr[],int size,int element)
{
	int low=0,high=size-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(arr[mid]==element)
		{
			return mid;
		}
		if(arr[mid]<element)
		{
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	return -1;
}
int main()
{
	int arr[] = {10,14,19,26,27,31,33,35,42,44};
	int size = sizeof(arr)/sizeof(int);
	int element=31;
	int index = Binarysearch(arr,size,element);
	if(index==-1)
	printf("Element not found in array\n");
	else
	printf("Element %d is at index: %d",element,index);
	return 0;
}
