/* Q-48 ---> Define a structure called ‘cricket’ that will describe the following information:
    Player name, Team name, Batting average
    Using cricket, declare an array ‘player’ with 5 elements and write a C program to read the information about all the 5 players and print team wise list containing names of players with their batting average.*/
# include<stdio.h> 

struct cricket
{
    char tName[20];
    char pName[10];
    float battingAvg;
};
int main()
{
    struct cricket p[5];
    int i;

    for(i=0; i<5; i++)
    {
        printf("Enter player name : \n");
        scanf("%s", &p[i].pName);

        printf("Enter team name : \n");
        scanf("%s", &p[i].tName);

        printf("Enter batting average : \n");
        scanf("%f", &p[i].battingAvg);
    }

    for(i=0; i<5; i++)
    {
        printf("Team name : %s \n Player Name : %s \n Batting Average : %f \n", p[i].tName, p[i].pName, p[i].battingAvg);
    }
    return 0;
}