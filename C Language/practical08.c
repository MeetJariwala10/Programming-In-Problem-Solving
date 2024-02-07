/* Q-8 ---> Write a program to find that the accepted number is Negative, or Positive or Zero */

#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number \n");
	scanf("%d", &a);
	
	if(a > 0)
	{
		printf("%d is positive number \n", a);
	}
	else if(a < 0)
	{
		printf("%d is negative number \n", a);
	}
	else
	{
		printf("The entered number is zero \n");
	}
	return 0;
}
