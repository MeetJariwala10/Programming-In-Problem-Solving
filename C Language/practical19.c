/* Q-19 ---> Write a program to input an integer number and check the last digit of number is even or odd
using any looping structure. */

#include<stdio.h>
int main()
{
	int n, last_digit;
	printf("Enter the value of n \n");
	scanf("%d", &n);
	
	last_digit = n%10;
	while(n>=0 || n<0)
	{
		if(last_digit%2==0)
		{
			printf("The last digit is even \n");
			break;
		}
		else
		{
			printf("The last digit is odd \n");
			break;
		}
	}
	return 0;
}

