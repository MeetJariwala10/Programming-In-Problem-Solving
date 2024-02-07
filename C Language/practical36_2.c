/* Q-36(2) ---> Write a program to print following patterns:

  12345
  1234
  123
  12
  1  */

#include<stdio.h>  
int main()
{
    int n;
    printf("Enter number of lines : ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
			if(i+j>n+1)
            {
                printf(" ");
            }
            else
            {
            printf("%d", j);
            }    
        }
        printf("\n");
    }
    return 0;
}
