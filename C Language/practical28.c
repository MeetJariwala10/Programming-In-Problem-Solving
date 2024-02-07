/* Q-28 ---> Write a program to accept start number and end number from the user and print all the numbers
in the range. */

#include<stdio.h>
int main()
{
	int start, end;
	printf("Enter start number:");
	scanf("%d", &start);
	printf("Enter end number:");
	scanf("%d", &end);
	printf("The numbers in range are :");
	for(int i= start; i<=end; i++)
	{
		printf("%d, ", i);
	}
	return 0;
}
