# include<stdio.h> 

int main()
{
    // 38(1)
    // int n=5;
    // for(int i=1; i<=n; i++)
    // {
    //     for(int j=1; j<=i; j++)
    //     {
    //         printf("%c", 64+j);
    //     }
    //     printf("\n");
    // }


    // 38(2)
    int n=5;
    for(int i=1; i<=n; i++)
    {
        for(int j=n; j>=i; j--)
        {
            printf("%c", 64+i);
        }
        printf("\n");
    }
    return 0;
}