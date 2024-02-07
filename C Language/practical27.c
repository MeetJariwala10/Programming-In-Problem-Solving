/* Q-27---> Write a program to find the sum and average of different numbers. The user sould be able to
enter as many numbers as he wants.*/
#include<stdio.h>
int main()
{
	int len, num, sum=0;
	float avg;
	printf("Enter length of number \n");
	scanf("%d", &len);
	for(int i=1; i<=len; i++)
	{
		printf("Enter number %d :", i);
		scanf("%d", &num);
		sum += num;
		avg = (float)sum/len;
	}
	
	printf("The sum of numbers is %d \n", sum);
	printf("The average of numbers is %f \n", avg);
	return 0;
}
