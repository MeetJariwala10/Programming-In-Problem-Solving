/* Q-47 ---> Define a structure called "personal" that contains person name, date of joining and slalry. Using
this structure, write a program to read personal information of 5 people and print the same on 
screen. */
# include<stdio.h> 

struct personal
{
    char pName[20];
    char doj[10];
    int salary;
};
int main()
{
    struct personal info[5];
    
    for(int i=0; i<5; i++)
    {
        printf("Enter details for person %d \n", i+1);

        printf("Enter name: \n");
        scanf("%s", &info[i].pName);

        printf("Enter date of join in dd-mm-yy :\n");
        scanf("%s", &info[i].doj);

        printf("Enter salary :\n");
        scanf("%d", &info[i].salary);
    }
    for(int i=0; i<5; i++)
    {
        printf("Details of person %d : \n", i+1);
        printf("Name = %s \n Date of join = %s \n Salary = %d \n", info[i].pName, info[i].doj, info[i].salary);
    }

    return 0;   
}