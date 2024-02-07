/* Q-18 ---> Write a program to find out the Maximum and Minimum number from given 10 numbers using
for, while loop. */

#include <stdio.h>
int main()
{
	int num1, num2, max,min,i=1;
	printf("\nEnter a number \n");
	scanf("%d",&num1);
	
	max=num1;
	min=num1;
	
	while(i<=9)
	{
		i++;
		printf("Enter a number \n");
		scanf("%d",&num2);
		
		if (num2>max)
		{
			max=num2;
		}
		else if(num2<min)
		{
				min=num2;
		}
	}
	printf("\nThe maximum number is %d",max);
	printf("\nThe minimum number is %d",min);
	
	return 0;
}
