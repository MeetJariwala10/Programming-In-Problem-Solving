/* Q-35(3) ---> Write a program to print following patterns:

    * * * * *
    * * * *
    * * *
    * *
    *         */

# include<stdio.h> 

int main()
{
    int n;
    printf("Enter number of lines: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i+j>n-1)
            {
                printf(" ");
            }
            else
            {
            printf("*");
            }    

        }
        printf("\n");
    }
    return 0;
}