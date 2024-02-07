#include<stdio.h>
int main()
{
	float base, height, area;
	
	printf("Enter the value of base \n");
	scanf("%f", &base);
	
	printf("Enter the value of height \n");
	scanf("%f", &height);
	
	area =  (base * height)/2 ; 
	
	printf("The area of the given triangle is %f \n", area);

return 0;
}
