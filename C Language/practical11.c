/* Q-11 ---> Write a program to check whether the entered character is capital, small letter, digit or any
special character */

#include<stdio.h>
int main()
{
	char ch;
	printf("Enter your character \n");
	scanf("%c", &ch);
	
	if(ch >=  'A' && ch <= 'Z')
	{
		printf("%c is capital letter \n", ch);
	}
	else if(ch >= 'a' && ch <= 'z')
	{
		printf("%c is small letter \n", ch);
	}
	else if(ch >='1' && ch <= '9')
	{
		printf("%c is a number \n", ch);
	}
	else
	{
		printf("%c is not a alphabet \n", ch);
	}
	return 0;
}
