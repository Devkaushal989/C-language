//Input from user
#include<stdio.h>
int main()
{
	char name[20];
	printf("Enter your name: ");
//	scanf("%s",name);
//	If full name
    scanf("%[^\n]s",name);
	printf("Your name is: %s",name);
	return 0;
}
