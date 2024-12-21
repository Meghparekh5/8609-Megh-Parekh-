#include<stdio.h>
void main()
{
    int arr[100],n,i,sum=0;//n=number
   
    printf("Enter value of n= ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
     if(arr[i]%2==0)
     {
        sum+=arr[i];
     }
    }
    printf("sum of all positive no in 1d array is =%d",sum);
  
}