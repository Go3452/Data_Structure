#include<stdio.h>
int fact(int n)
{
 int f=1;
 int i;
 for(i=1;i<=n;i++)
 {
  f*=i;
 }
 return f;
}
int main()
{
 int m;
 printf("Enter the number :");
 scanf("%d",&m);
 printf("%d",fact(m));
}
