/* Q-40 ---> Write a program to read and store the roll no and marks of 20 students using two-dimensional array.
 */
# include<stdio.h> 
int main()
{
    int n;
    printf("Enter number of students : \n");
    scanf("%d", &n);
    int arr[n][2];
    for(int i=0; i<n; i++)
    {
        printf("For student %d enter Roll Number : \n", i+1);
        scanf("%d", &arr[i][0]);
        printf("Enter marks : \n");
        scanf("%d", &arr[i][1]);
    }
    for(int i=0; i<n; i++)
    {
        printf("Student %d having roll number %d and marks %d \n", i+1, arr[i][0], arr[i][1]);
    }
    return 0;
}