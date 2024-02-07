//Q-22 ---> Write a program to check whether the given number is prime or not.
#include<stdio.h>
int main()
{
	int i, n, prime;
	printf("Enter the value of n \n");
	scanf("%d", &n);
	
	for(i=2;i<=n-1;i++)
	{
		if(n%i == 0)
		{
			prime = 0;
		} 
		break;
	}
	if(prime == 0)
	{
		printf("Entered number is not a prime number \n");
	}
	else
	{
		printf("Entered number is a prime number \n");
	}
	return 0;
}
