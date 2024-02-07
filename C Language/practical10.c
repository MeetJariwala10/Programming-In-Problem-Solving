/* Q-10 ---> Write a program to read three numbers from keyboard and find out maximum out of these three*/

#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter the value of a \n");
	scanf("%d", &a);
	
	printf("Enter the value of b \n");
	scanf("%d", &b);
	
	printf("Enter the value of c \n");
	scanf("%d", &c);
	
	if(a > b && a > c)
	{
		printf("%d is greatest number \n", a);
	}
	else if(b > c)
	{
		printf("%d is greatest number \n", b);
	}
	else
	{
		printf("%d is greatest number \n", c);
	}
	
	return 0;
}
