#include<stdio.h>
int main()
{
		float principal, rate, years, simpleinterest;
		
		printf("Enter your principal amount \n");
		scanf("%f", &principal);
		
		printf("Enter your rate of interest \n");
		scanf("%f", &rate);
		
		printf("Enter number of years \n");
		scanf("%f", &years);
		
		simpleinterest = (principal * rate * years)/100 ;
		
		printf("The value of simple interest is %f \n", simpleinterest);
		
		
	return 0;
}
