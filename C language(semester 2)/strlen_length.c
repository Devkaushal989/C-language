//1).strlen(string)=> return integer value that is number of character in string
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[]="Welcome to ";
	char s2[20];
	printf("Enter name of city: ");
	scanf("%[^\n]s",s2);
	strcat(s1,s2);
	printf("%s",s1);
//	char name[]="Geeta University";
//	printf("Number of char are %d",strlen(name));
//	strlen(name);
    return 0;
}
