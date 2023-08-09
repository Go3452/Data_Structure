#include<stdio.h>
int fibo(int n)
{
 if(n<=3)
  return 1;
 else 
  return fibo(n-1) + fibo(n-4);
}
int main()
{
 int m;
 printf("Enter the number :");
 scanf("%d",&m);
 printf("%d",fibo(m));
}
