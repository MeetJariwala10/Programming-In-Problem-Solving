/* Q-50 ---> Write a program for sorting using pointer.*/

#include<stdio.h>
int main()
{
	int a[50], n, *ptr = a, i, j, temp;
	printf("Enter size :\n");
	scanf("%d", &n);
	printf("Enter elements of array : \n");
	
	for(i=0; i<n; i++)
	{
			scanf("%d", (ptr+i));
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n-i-1; j++)
		{
			if(*(ptr+j) > *(ptr+j+1))
			{
				temp = *(ptr+j);
				*(ptr+j) = *(ptr+j+1);
				*(ptr+j+1) = temp;
			}
			
		}
	}
	printf("The array after sorting is : \n");
	for(i=0; i<n; i++)
	{
		printf("%d ", *(ptr+i));
	}
	return 0;
}
