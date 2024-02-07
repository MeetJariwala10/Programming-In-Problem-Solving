/* Q-29 ---> Write a program to calculate average and total marks of 5 students for 3 subjects (use nested for
loops). */

#include<stdio.h>
int main()
{
	int marks, sum=0;
	float avg;
	for(int i=1; i<=5; i++)
	{
		sum = 0;
		for(int j=1; j<=3; j++)
		{
			printf("Enter marks for student %d in subject %d :", i, j);
			scanf("%d", &marks);
			sum += marks;
			avg = (float)sum/3;
			
		}
		printf("The sum of marks is %d \n", sum);
		printf("The avg of marks is %f \n", avg);
	}
	
	return 0;
}
