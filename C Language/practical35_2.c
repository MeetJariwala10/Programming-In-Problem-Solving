/* Q-35(2) ---> Write a program to print following patterns:
    *
   * *
  * * *
 * * * *   */

# include<stdio.h> 

int main()
{
    int n;
    printf("Enter number of lines: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=2*n; j++)
        {
            if(i+j >= 2*n)
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
