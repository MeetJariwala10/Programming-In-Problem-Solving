/* Q-32 ---> Write a program to find 1+1/2+1/3+1/4+....+1/n */
#include<stdio.h>
int main()
{
	float a, n, sum=0;
	printf("Enter the value of n \n");
	scanf("%f", &n);
	
	for(int i=1; i<=n; i++)
	{
		a = (float)1/i;
		sum += a;
	}
	printf("The value is %f \n", sum);
	return 0;
}
