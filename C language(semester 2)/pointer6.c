#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char* name = (char*) malloc(30*sizeof(char));
	strcpy(name, "Geeta University");
	printf("string is:%s\n",name);
	free(name);
	printf("string is:%s",name);
}
