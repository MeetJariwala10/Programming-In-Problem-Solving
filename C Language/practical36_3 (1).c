/* Q-36(3) ---> Write a program to print following patterns:

  55555
  4444
  333
  22
  1  */

// #include<stdio.h>  
// int main()
// {
//   int n;
//   printf("Enter number of lines : ");
//   scanf("%d", &n);

//   for(int i = n; i >= 1; i--)
//   {
//     for(int j = i; j >= 1; j--)
//     {
// 	    printf("%d", i);    
//     }
//     printf("\n");
//   }
//   return 0;
// }

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
          printf("%d", n-i+1);
        }    
      }
      printf("\n");
    }
    return 0;
}