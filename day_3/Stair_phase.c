#include<stdio.h>
int fibo(int n)
{
 int i;
 int a=1;
 int b=1;
 int fib;
 for(i=1;i<n;i++)
 {
  fib = a+b;
  a = b;
  b = fib;
 }
 return fib;
}
int main()
{
 int m;
 printf("Enter the number :");
 scanf("%d",&m);
 printf("%d",fibo(m));
}
