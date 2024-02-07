/*Q-15 ---> write a menu-driven program for scientific calculator using switch-case statement. (add, sub,
mul, div, module, square, square root, power, log*/

#include<stdio.h>
#include<math.h>
int main()
{
	int n1, n2, operation;
	printf("Enter 1st number \n");
	scanf("%d", &n1);
	printf("Enter 2nd number \n");
	scanf("%d", &n2);
	printf("1-Add\n 2-subtract\n 3-Multiply\n 4-Divide\n 5-Module\n 6-Square\n 7-Square root\n 8-Power\n 9-log\n");
	printf("Enter the operation \n");
	scanf("%d", &operation);
	
	switch(operation)
	{
		case 1:
		{
			printf("The addition of n1 and n2 is %d \n", n1+n2);
			break;
		}
		case 2:
		{
			printf("The subtraction of n1 and n2 is %d \n", n1-n2);
			break;
		}
		case 3:
		{
			printf("The multiplication of n1 and n2 is %d \n", n1*n2);
			break;
		}
		case 4:
		{
			printf("The division of n1 and n2 is %d \n", n1/n2);
			break;
		}
		case 5:
		{
			printf("The module of n1 and n2 is %d \n", n1%n2);
			break;
		}
		case 6:
		{
			printf("The square of n1 is %f and n2 is %f \n", pow(n1,2), pow(n2,2));
			break;
		}
		case 7:
		{
			printf("The square root of n1 is %f and n2 is %f \n", sqrt(n1), sqrt(n2));
			break;
		}
		case 8:
		{
			printf("The power of n1 to n2 is %f \n", pow(n1,n2));
			break;
		}
		case 9:
		{
			printf("The log of n1 is %f and n2 is %f  \n", log(n1), log(n2));
			break;
		}
		default:
		{
			printf("Invalid Operation \n");
			break;
		}
	}
	return 0;
}
