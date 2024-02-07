/* Q-12 ---> Write a program to read marks from keyboard and your program should display equivalent
grade according to following table */

#include<stdio.h>
int main()
{
	int marks;
	printf("Enter your total marks out of 100 \n");
	scanf("%d", &marks);
	
	if(marks >= 80 && marks <= 100)
	{
		printf("You are in group distinction \n");
	}
	else if(marks >= 60 && marks <= 79)
	{
		printf("You are in first class \n");
	}
	else if(marks >= 40 && marks <= 59)
	{
		printf("You are in second class \n");
	}
	else if(marks >= 0 && marks < 40)
	{
		printf("You are fail \n");
	}
	return 0;
}
