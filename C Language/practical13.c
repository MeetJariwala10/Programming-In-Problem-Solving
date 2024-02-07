/* Q-13 ---> Write a program to prepare pay slip using following data.
Da = 10% of basic, Hra = 7.50% of basic, Ma = 300,
Pf = 12.50% of basic, Gross = basic + Da + Hra + Ma, Nt = Gross Pf */

#include<stdio.h>
int main()
{
	float basic, da, hra, pf, gross, nt;
	int ma = 300;
	printf("Enter the value of basics \n");
	scanf("%f", &basic);
	
	da = 0.1 * basic;
	hra = 0.075 * basic;
	pf = 0.125 * basic;
	
	gross = basic + da + hra + ma;
	nt = gross - pf;
	
	printf("Gross is %f \n", gross);
	printf("nt is %f \n", nt);
	
	return 0;
}
