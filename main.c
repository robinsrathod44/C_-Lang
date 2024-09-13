#include<stdio.h>
#include<conio.h>
void main()
{
    int day;
    printf("\n Year of day 365");
    printf("\n Year of day 366");
    printf("\n Enter the day :");
    scanf("%d",&day);
    if(day==365)
    {
        printf("\n It is Normal year");
    }
    else if(day==366)
    {
        printf("\n It is Leap year");
        
    }
    else
    {
        printf("\n You have entered wrong day");
    }
getch();
}