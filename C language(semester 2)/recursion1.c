//recursion=a function calling itself
#include<stdio.h>
#include<stdlib.h>
/*
int fun(int n){
    if(n==1)
    return 1;
    else
    return n+fun(n-1); 
}
int main(){
    int n=3;
    printf("%d",fun(n));
    return 0;
}
*/

// how to write recursive function:
// step 1:divide the problems into small subproblem
// step 2:specify condition to stop the recursion (called base case)


    //    basic structure of recursive function
 /*
 int fact()
{
    if()
    ---- }base case
    -----
    else
    --- } recursive procedure
    ----
}

fact(n)=n*fact(n-1)
*/
/*
int fact(int n){
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
}
int main(){
    int n=4;
    printf("%d",fact(n));
    return 0;

}
*/

   //type of recursion:
 /*  1.direct recursion = a function calling itself inside its body directly

   2.indirect  recursion = two function calling each other
   void funA(){
    -----
    -----
    funB();
   }
   void funB{
    ------
    ------
    funA();
   }
   */
void odd();
void even();
int n=1;
void odd(){
    if(n<=10){
        printf("%d",n+1);
        n++;
    }
    even();
}
void even(){
    if(n<=10){
        printf("%d",n-1);
        n++;
    }
    odd();
}
int main(){
    odd();
    return 0;
}

/*
   3.tail  recursion*/
   
   /*4.non-tail  recursion */
