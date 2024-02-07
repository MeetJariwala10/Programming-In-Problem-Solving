 // Q-14 ---> Write a program to read no 1 to 7 and print relatively day Sunday to Saturday
#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number \n");
	scanf("%d", &num);
	if(num == 1)
	{
		printf("Today is Sunday \n");
	}
	else if(num == 2)
	{
		printf("Today is monday \n");
	}
	else if(num == 3)
	{
		printf("Today is Tuesday \n");
	}
	else if(num == 4)
	{
		printf("Today is Wednesday \n");
	}
	else if(num == 5)
	{
		printf("Today is Thursday \n");
	}
	else if(num == 6)
	{
		printf("Today is Friday \n");
	}
	else if(num == 7)
	{
		printf("Today is Saturday \n");
	}
	
	return 0;
}
