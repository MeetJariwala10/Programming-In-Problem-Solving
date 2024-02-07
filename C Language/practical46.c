/* Q-46 ---> Define a structure data type called time_struct containing three members'
- integer hour, integer
minute and integer second. Develop a program that would assign values to the individual
number and display the time in the format: (16: 40: 51).*/

#include<stdio.h>
struct time
{
	int hour, minute, second;
};
int main()
{
	struct time t;
	
	printf("Enter hours :\n");
	scanf("%d", &t.hour);
	
	printf("Enter minutes :\n");
	scanf("%d", &t.minute);
	
	printf("Enter seconds :\n");
	scanf("%d", &t.second);
	
	printf("The hours, minutes and seconds is %d:%d:%d \n", t.hour, t.minute, t.second);
	return 0;
}
