/* Q-6 ---> Write a program to compute Fahrenheit from centigrade */
#include<stdio.h>
int main()
{
	float c, f;
	printf("Enter the value of temperature in degree centrigrade \n");
	scanf("%f", &c);
	
	f = 1.8 * c + 32;
	
	printf("The value of temperature in Farenheit is %f \n", f);
	return 0;
}
