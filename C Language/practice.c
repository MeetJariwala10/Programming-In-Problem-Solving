# include<stdio.h> 

struct student
{
    int rollno;
    int marks[2];
    int total;
};
int main()
{
    struct student s[3];
    for(int i=0; i<3; i++)
    {
        printf("Enter roll number for student %d: \n", i);
        scanf("%d", &s[i].rollno);
        for(int j=0; j<2; j++)
        {
            printf("Enter marks : \n");
            scanf("%d", s[i].marks[j]);
            s[i].total = s[i].total + s[i].marks[j];

        }
        
    }  
    for(int i=0; i<3; i++)
    {
       printf("Roll number is %d :\n", s[i].rollno);
       printf("Marks is %d and %d :\n", s[i].marks[0], s[i].marks[1]);

    }  
    return 0;
}