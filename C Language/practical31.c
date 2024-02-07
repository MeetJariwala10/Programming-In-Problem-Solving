/* Q-31 ---> write a program to evaluate the series 1^2+2^2+3^2+.....n^2 */

#include<stdio.h>
int main()
{
	int i, n, a, sum=0;
	printf("Enter the value of n \n");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		a = i*i;
		sum += a;
	}
	printf("The sum of squares is %d \n",sum);
	return 0;
}
