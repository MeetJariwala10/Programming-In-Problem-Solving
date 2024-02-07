//Q-24 ---> Write a program to find factorial of a given number.
#include<stdio.h>

int fact(int x);
int main()
{
	int n;
	printf("Enter the value of n \n");
	scanf("%d", &n);
	printf("The factorial of number is %d \n", fact(n));
	return 0;
}
int fact(int x)
{
	if(x==0 || x==1)
	{
		return 1;
	}
	else
	{
		return x*fact(x-1);
	}
}

