/* Q-33 ---> Write a program to evaluate the series sum=1-x+x^2/2!-x^3/3!+x^4/4!......-x^9/9! */

#include<stdio.h>
#include<math.h>

int main()
{
	int x, n;
	float a, b=1, result=1;
	
	printf("Enter the value of x \n");
	scanf("%d", &x);
	printf("Enter the length of n \n");
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++)
	{
		a = pow(-x,i);
		b = b*i;
		result += a/b;
	}
	printf("The result is %f \n", result);
	return 0;
}
