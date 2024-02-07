# include<stdio.h> 

int main()
{
    int len, max, min;
    printf("Enter length of array : \n");
    scanf("%d", &len);
    int arr[len];
    printf("Enter your array : \n");
    for(int i=0; i<len; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<len; i++)
    {
        printf("%d ", arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for(int i=0; i<len; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
        else if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    printf("\n The maximum number is %d and minimum number is %d \n", max, min);

    return 0;
}