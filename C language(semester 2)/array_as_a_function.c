#include<stdio.h>
void printarray(int a[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d ",a[i] );
	}
}
int main()
{
	int a[]={5,6,3,2,9};
	int b[]={2,5,7,9,15,20};
	int c[]={10,15,20,26,30};
	printf("Elements of a:");
	printarray(a,5);
	printf("\nElements of b:");
	printarray(b,6);
	printf("\nElements of c:");
	printarray(c,5);
    return 0;
}
