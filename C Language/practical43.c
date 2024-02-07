/* Q-43 ---> Write a program to reverse string.*/
#include<stdio.h> 
#include<string.h>
int main()
{
    char str[50];
    int length, temp;
    printf("Enter a string : ");
    // scanf("%s", &str); // For reversing single word 
    gets(str); // For reversing whole sentence
    printf("The string before reversing is : %s \n", str);

    length = strlen(str);
    for(int i=0; i<length/2 ; i++)
    {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
    printf("The string after reversing is %s \n", str);
    return 0;
}