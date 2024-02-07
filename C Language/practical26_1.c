/* Q-26 ---> Write a program that accept a string and count the number of space character, tab character,
new line character, and any other characters.
(Hint: use getchar() to accept characters. Use combination of switch..case and while loo).*/

#include<stdio.h>
int main()
{
	int space=0, tab=0, newLine=0, other=0;
	char sent;
	printf("Enter a sentence :");
	
	while (sent !='.' && sent !='?' && sent !='!')
	{
		sent = getchar();
		switch(sent)
		{
			case ' ':
			++space;
			break;
			case '\n':
			++newLine;
			break;
			case '\t':
			++tab;
			break;
			default:
			++other;
			break;
		}

	}
	printf("The number of spaces are %d \n", space);
	printf("The number of new lines are %d \n", newLine);
	printf("The number of tabs are %d \n", tab);
	printf("The number of  other character are %d \n", other);
	return 0;
}
