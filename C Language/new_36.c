# include<stdio.h> 

int main()
{
    // 36(1)
    // int n=5;
    // for(int i=1; i<=n; i++)
    // {
    //     for(int j=1; j<=i; j++)
    //     {
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }

    // 36(2)
    // int n=5;
    // for(int i=1; i<=n; i++)
    // {
    //     for(int j=1; j<=n-i+1; j++)
    //     {
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }

    //36(2) OR
    // int n=5;
    // for(int i=n; i>=1; i--)
    // {
    //     for(int j=1; j<=i; j++)
    //     {
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }

    // 36(3)
    // int n=5;
    // for(int i=n; i>=1; i--)
    // {
    //     for(int j=1; j<=i; j++)
    //     {
    //         printf("%d", i);
    //     }
    //     printf("\n");
    // }


    // 36(4)
    int n = 5;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}