#include<stdio.h>
int main()
{
	char name[20];
	printf("Enter your name: ");
	gets(name);
	printf("Your name is: ");
	puts(name);
	return 0;
}
// string function in c - <string.h>
/*
strlen() - to find the length of string -> return intger value that no. of character in string
strcpy() - to copy one string to other
strcmp() - to compare two string
strrev() - to reverse the string 
strcat() - concatenate two string 
strcat() - concatenate n number of character
*/
//1)strlen(string)=> return integer value that is number of character in string 
//int main()
//{
//	char name[]="Geeta University";
//	printf("Number of char are %d",strlen(name));
//	strlen(name);
//}
