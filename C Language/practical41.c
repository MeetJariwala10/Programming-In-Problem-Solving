/* Q-41 ---> Write a program to sort given array in ascending order. (Use Bubble sort).
 */
# include<stdio.h> 
int main()
{
    int arr[5], temp;
    printf("Enter your array :\n");
    for(int i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The array is : \n");
    for(int i=0; i<5; i++)
    {
        printf("%d \n", arr[i]);
    }
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5-i-1; j++)
        {
            if(arr[j]>arr[j+1]) // For sorting in descending order do arr[j+1]>arr[j]
            {                   
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("The array after sorting in ascending order is : \n");
    for(int i=0; i<5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}