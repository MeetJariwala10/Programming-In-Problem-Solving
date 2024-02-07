/* Q-7 ---> Write a program to find out distance travelled by a vehicle for time (t) with equation d = ut + at2
where u= velocity and a=acceleration*/

#include<stdio.h>
int main()
{
	float d, u, t, a;
	printf("Enter the value of velocity \n");
	scanf("%f", &u);
	
	printf("Enter the value of time \n");
	scanf("%f", &t);
	
	printf("Enter the value of accelaration \n");
	scanf("%f", &a);
	
	d = u*t + 0.5*a*t*t ;
	
	printf("The distance travelled by the vehicle is %f \n", d);
	return 0;
}
