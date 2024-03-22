//Write a program to find the area of circle using pointer
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.14159
int main()
{
	float radius; 
    float area;    
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = PI * pow(radius, 2);
    printf("The area of the circle is: %.2f\n", area);
}
