#include<stdio.h>
int convertBinary(int);

int main()
{
    long biNo;
    int decNo;

    printf(" Input any decimal number : ");
    scanf("%d",&decNo);

    biNo = convertBinary(decNo);
    printf(" The Binary value of decimal no. %d is : %d",decNo,biNo);
    return 0;
}

int convertBinary(int decNo)
{
    int biNo,r,fctor = 1;

    if(decNo != 0)
    {
         r = decNo % 2;
         biNo = biNo + r * fctor;
         fctor = fctor * 10;
         convertBinary(decNo / 2);
    }
    return biNo;
}
