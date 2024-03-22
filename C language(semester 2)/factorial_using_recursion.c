#include <stdio.h>
int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}
int main(){
    int n;
    int sum=0;
    printf("Enter the series: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum = fact(i)/i + sum;
    }
    printf("The sum of the series is: %d\n",sum);
    return 0;
}