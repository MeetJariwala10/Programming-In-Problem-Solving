// Q-25 ---> Write a program to generate first n number of Fibonacci series.
#include<stdio.h>

int fib(int n);
int main()
{
	int i, n;
	printf("Enter the value of n \n");
	scanf("%d", &n);
	for(i=0;i<=n;i++)
	{
		printf("The fibonacci series is %d \n",fib(i));		
	}
	return 0;
}
int fib(int n)
{
	if(n == 0)
	return 0;
	
	if(n==1)
	return 1;
	
	else
	return fib(n-1)+fib(n-2);
}
