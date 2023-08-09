#include<stdio.h>
int fibo(int n)
{
 if(n<4 )
  return 0;
 else if(n==4 || n==6)
  return 1;
 else
  return fibo(n-6) + fibo(n-4);
}
int main()
{
 int m;
 printf("Enter the number :");
 scanf("%d",&m);
 printf("%d",fibo(m));
}
