// Q-49 ---> Write a program to swap two values using pointers.

#include<stdio.h>
int swap(int *a, int *b);
int main()
{
	int a, b;
	printf("Enter 1st number \n");
	scanf("%d", &a);
	printf("Enter 2nd number \n");
	scanf("%d", &b);
	printf("The value before swaping is a=%d and b=%d \n", a, b);
	swap(&a,&b);
	printf("The value after swaping is a=%d and b=%d \n", a, b);
	
	return 0;
}

int swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
