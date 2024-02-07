/* Q-9 ---> Write a program to read marks for a single subject of a student. If marks < 36, output the result as 'Fail' otherwise 'pass'*/

#include<stdio.h>
int main()
{
	int marks;
	printf("Enter your marks \n");
	scanf("%d", &marks);
	
	if(marks < 36)
	{
		printf("You are fail \n");
	}
	else 
	{
		printf("You are pass \n");
	}
	return 0;
}
