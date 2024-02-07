
/*37. Write a program to print following patterns:
   1
  1 1
 1 2 1
1 3 3 1 */

#include <stdio.h>

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}
int main()
{
    int n, a, i, j;
    printf("Enter a number of rows: ");
    scanf("%d", &n);

    for (i = 0; i <= n - 1; i++)
    {
        for (j = 0; j <= n; j++)
        {
            if (i + j >= n)
            {
                for (a = 0; a <= i; a++)
                {
                    if (i + j > n)
                    {
                        break;
                    }
                    printf("%d ", fact(i) / (fact(i - a) * fact(a)));
                }
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