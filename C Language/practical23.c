/* Q-23 --->  Write a program to print first n prime numbers. */
# include<stdio.h> 
int prime(int n);
int main()
{
    int n1, n2;
    printf("Enter number 1 \n");
    scanf("%d", &n1);
    printf("Enter number 2 \n");
    scanf("%d", &n2);

printf("The prime numbers between %d and %d are : ", n1, n2);
    for(int i = n1; i <= n2; i++)
    {
        if(prime(i))
        {
            printf("%d ", i);
        }
    }
    return 0;
}
int prime(int n)
{
    for(int i = 2; i*i<=n; i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}