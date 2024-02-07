/* Q-44 ---> Write a program that defines a function to check whether a given number is prime or not.
*/
#include<stdio.h>

int prime(int n);
int main()
{
	int n, p;
	printf("Enter the number : \n");
	scanf("%d", &n);
	p = prime(n);
	
	if(p == 0)
	{
		printf("%d is not prime \n", n);
	}
	else
	{
		printf("%d is  prime \n", n);
	}
	return 0;
}

int prime(int n)
{
	int i;
	for(i=2; i<=n-1; i++)
	{
		if(n%i == 0)
		return 0;
	}
	return 1;
}
