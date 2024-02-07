/* Q-11 ---> Write a program to check whether the entered character is capital, small letter, digit or any
special character */

#include<stdio.h>
int main()
{
	char ch;
	printf("Enter your character \n");
	scanf("%c", &ch);
	
	if(ch >= 65  && ch <= 90)
	{
		printf("%c is capital letter \n", ch);
	}
	else if(ch >= 97 && ch <= 122)
	{
		printf("%c is small letter \n", ch);
	}
	else if(ch >= 48 && ch <= 57)
	{
		printf("%c is a number \n", ch);
	}
	else if((ch >= 32 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96))
	{
		printf("%c is a special character \n", ch);
	}
	return 0;
}
