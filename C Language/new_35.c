# include<stdio.h> 

int main()
{  // 35(1)
    // int n=5;
    // for(int i=1; i<=n; i++)
    // {
    //     for(int j=1; j<=i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // 35(2)
    int n=5;
    for(int i=1; i<=n; i++)
    {
        for(int j=n; j>=i; j--)
        {
            printf(" ");
        }
        for(int k=1; k<=i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // 35(3)
    // int n=5;
    // for(int i=1; i<=n; i++)
    // {
    //     for(int j=n; j>=i; j--)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    return 0;
}