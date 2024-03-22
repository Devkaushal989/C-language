// Write a c program to add numbers using call by reference
#include<stdio.h>
int sum(int *p1,int *p2){
    int s= *p1 + *p2;
    return s;
}
int main()
{
   int x,y;
   printf("Enter x:");
   scanf("%d",&x);
   printf("Enter y:");
   scanf(" %d",&y);
   printf("Sum of %d and %d is: %d\n",x,y,sum(&x,&y));//pass the address of actual parameter
//    sum(&x, &y));
   return 0;
}