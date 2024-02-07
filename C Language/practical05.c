 /* Q-5 ---> Write a program to enter a distance into kilometer and convert it in to meter, feet, inches and
centimeter*/

#include<stdio.h>
int main()
{
	float distance;
	printf("Enter the value of distance in kilometers \n");
	scanf("%f", &distance);
	
	printf("The value of distance in metres is %f \n", distance * 1000);
	printf("The value of distance in feet is %f \n", distance * 3280.8399);
	printf("The value of distance in inches is %f \n", distance / 0.0000254);
	printf("The value of distance in centimeter is %f \n", distance * 100000);
	
	return 0;
}
