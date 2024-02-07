# include<stdio.h> 

int main()
{
    int n, a=0, b=1, c;
    printf("Enter the value of n : \n");
    scanf("%d", &n);
    printf("The fibonacci series is : \n");

    for(int i=1; i<=n; i++)
    {
        printf("%d \n", a);
        c = a+b;
        a = b;
        b = c;
    }
    return 0;
}