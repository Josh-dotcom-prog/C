#include<stdio.h>
int main()
{
    char Grade;

    printf("Enter the grade: ");
    scanf("%c",&Grade);
    if (Grade=='E')
    {
        printf("you have chosen : Excellent");
    }
    else if(Grade=='V')
    {
        printf("you have chosen : Very Good");
    }
    else if(Grade=='G')
    {
        printf("you have chosen : Good");
    }
    else if(Grade=='A')
    {
        printf("you have chosen : Average");
    }
    else if(Grade=='F')
    {
        printf("you have chosen : Fail");
    }
    else 
    {
        printf("Invalid input");
    }
     return(0);
}