
// Q ---> Write a program to interchange two numbers

#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter the value of a \n");
	scanf("%d", &a);
	printf("Enter the value of b \n");
	scanf("%d", &b);
	
	c = a;
	a = b;
	b = c;
	printf("The value of a = %d and b = %d \n", a, b);
	return 0;
}
