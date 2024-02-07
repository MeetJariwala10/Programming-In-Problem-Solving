/* Q-39 ---> Write a program to find out which number is even or odd from list of 10 numbers using an
array */

#include<stdio.h>
int main()
{
	int arr[10];
	printf("Enter array :");
	for(int i = 0; i<=9; i++)
	{
		scanf("%d", &arr[i]);
		if(arr[i]%2 == 0)
		printf("%d is even \n", arr[i]);
		else
		printf("%d is odd \n", arr[i]);
		
	}
	
	return 0;
}
