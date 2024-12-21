#include<stdio.h>
void main()
{
    int length,height;
    float area;
    printf("Enter value of length= ");
    scanf("%d",&length);
    printf("Enter value of height = ");
    scanf("%d",&height);
    area=(length*height)/22;
    printf("Area of triangle is =%.2f",area);
}