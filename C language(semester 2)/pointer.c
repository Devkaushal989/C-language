#include<stdio.h>
int main(){
    int x,y;
    int *p1 =&x;
    int *p2=&y;
    printf("Enter the two number:");
    scanf("%d%d",&x,&y);
    int c=*p1+*p2;
    printf("sum=%d", c);

}