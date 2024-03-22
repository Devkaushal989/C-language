//Automatic Storage class
#include<stdio.h>
int main()
{
	int x=5;
	printf("%d",x);
	{
	    int	x=1;
	    x++;
        printf("%d",x);
	}
	printf("%d",x);
}
