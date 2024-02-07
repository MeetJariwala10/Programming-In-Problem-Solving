// Q-21 ---> Write a program to find out sum of first and last digit of a given number
# include<stdio.h> 

int main()
{
    int m, n, first_digit, last_digit, sum;
    printf("Enter the value of n \n");
    scanf("%d", &n);
    
    last_digit = n%10;
    while(n>=10)
    {
        n = n/10;
    }
    first_digit = n;
    sum = first_digit + last_digit;
    printf("The sum of first and last digit of number is %d \n", sum);
    
    return 0;
}
