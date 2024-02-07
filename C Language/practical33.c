/* Q-33 ---> Write a program to find 1+1/2!+1/3!+1/4!+.....+1/n! */

#include<stdio.h>
int main()
{
	int n;
	float a=1, sum=0;
	printf("Enter the value of n \n");
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++)
	{
		a = a*i;
		sum += 1/a;
	}
	printf("The value is %f\n", sum);
	return 0;
}
