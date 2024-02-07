#include<stdio.h>
int main()
{
	
	float no1, no2, add, subtract, divide, multiply;
	
	printf("Enter the value of no1 \n");
	scanf("%f", &no1);
	
	printf("Enter the value of no2 \n");
	scanf("%f", &no2);
	
	add = no1 + no2 ;
	subtract = no1 - no2 ;
	multiply = no1 * no2 ;
	divide = no1 / no2 ;
	
	printf("The addition of two numbers is %f \n", add);
	printf("The subtraction of two numbers is %f \n", subtract);
	printf("The multiplication of two numbers is %f \n", multiply);
	printf("The division of two numbers is %f \n", divide);
	
	
	

	
	
	return 0;
}
