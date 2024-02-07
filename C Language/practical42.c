/* Q-42 --->  Write a program to replace a character, to delete a character in a given string.
*/
# include<stdio.h> 

int main()
{
    int i=0;
    char str[50];
    printf("Enter String : \n");
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            str[i]='*';
        }
        i++;
    }
    printf("String After Replacing by '*' is : \n"); 
    printf("%s",str);
    return 0;
}