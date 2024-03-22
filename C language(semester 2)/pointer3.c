//Call by reference
#include<stdio.h>
void swap(int *p1,int *p2){
    int temp = *p1;
    *p1=*p2;
    *p2=temp;
}

int main(){
   int x,y;
   printf("Enter x:");
   scanf("%d",&x);
   printf("Enter y:");
   scanf("%d",&y);
   printf("Before swapping x=%d, y=%d\n",x,y);
   swap(&x,&y);
   printf("After swapping x=%d, y=%d\n",x,y);
   return 0;
}