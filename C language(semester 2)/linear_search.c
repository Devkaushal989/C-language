#include<stdio.h>

/*int main(){

int a[]={5=,6,9,3,8,27,15};
int item =8,i;
for(i=0;i<7;i++){
    if (a[i]==item){
        printf("item found index : %d",i);
        break;
    }
}
if(i>6){
printf("item not found");
}
}
*/
int linearSearch(int a[],int n,int item){
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==item)
        return i;  
    }
     return -1;
        
}
int main(){
    int a[]={1,2,3,4,5,6,7,8,9,0};
    int n=sizeof(a)/sizeof(int);
    int item=9;
    int search = linearSearch(a,n,item);
    if(search== -1)
    printf("item not found");
    else
    printf("item found at index : %d",search);
    return 0;
}
