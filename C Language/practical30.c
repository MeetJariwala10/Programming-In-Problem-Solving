/* Q-30 ---> Read five persons height and weight and count the number of person having height greater than
170 and weight less than 50 */

#include<stdio.h>
int main()
{
	int h, w, count=0;
	for(int i=1; i<=5; i++)
	{
		printf("Enter height of person %d is :", i);
		scanf("%d", &h);
		printf("Enter weight of person %d is :", i);
		scanf("%d", &w);
		if(h>170 && w<50)
		{
			count++;
		}
		
	}
	printf("Number of persons having height > 170 and weight < 50 are %d \n", count);
}
