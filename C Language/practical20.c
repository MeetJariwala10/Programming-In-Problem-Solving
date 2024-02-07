/* Q-20 ---> Write a program to print sum of individual digits of a given integer using while statement. (Use
% operator) */

#include<stdio.h> 

int main()
{
    int n, ld,sum=0;
    printf("Enter the number \n");
    scanf("%d", &n);

    while(n>0)
    {
        ld = n%10;
        sum = sum + ld;
        n = n/10;
    }
    printf("The sum of digits is %d \n", sum);
    return 0;
}
