/* Q-35(1) ---> Write a program to print following patterns:
*
* *
* * *
* * * *
* * * * *      */

# include<stdio.h> 

int main()
{
    int n;
    printf("Enter number of lines : ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
