 // Q-16 ---> Write a program to print sum of first n integer numbers
#include<stdio.h>
int main()
{
	int i, n, sum=0;
	printf("Enter the value of n \n");
	scanf("%d", &n);
	
	for(i=0; i<=n; i++)
	{
		sum += i;
	}
	printf("The sum of natural numbers is %d \n", sum);
	return 0;
}
