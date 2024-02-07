/*37. Write a program to print following patterns:
1)
     1
   1 2 3
 1 2 3 4 5 */

#include <stdio.h>

int main()
{
    int n, i, j, k;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= 2 * n; i++)
    {
        for (j = 1; j <= 2 * n; j++)
        {
            if (j >= i)
            {
                if (i % 2 == 0)
                {
                    break;
                }
                printf(" ");
            }
        }
        for (k = 1; k <= i; k++)
        {
            if (i + j >= n)
            {
                if (i % 2 == 0)
                {
                    break;
                }
                printf("%d ", k);
            }
        }
        if (i % 2 == 0)
        {
            continue;
        }
        printf("\n");
    }
    return 0;
}