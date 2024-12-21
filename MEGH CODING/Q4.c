#include<stdio.h>
int fac(int n)
{
    int factorial=1,i;
for(int i=1;i<=n;i++)
{
  factorial*=i;
}
return factorial;
}
void main()
{
int n,f;
printf("Enter value of n =");
scanf("%d",&n);
f=fac(n);
printf("factorial is = %d",f);
}