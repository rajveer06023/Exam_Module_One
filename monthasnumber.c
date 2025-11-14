//Develop a c program to enter month number between 1 and 12, as input and display number of days in month.

#include<stdio.h>
int main()
{
    int i;
    printf("enter month as a number :");
    scanf("%d", &i);   //input month number


    if(i > 0 && i <= 12)  //month number should be positive in between 1 to 12.
    {

        if(i == 1||i == 3||i == 5||i == 7||i == 8||i == 10||i == 12)
        printf("the days in this month is 31");
        else if(i == 2)
        printf("the days in this month is 28");
        else 
        printf("the days in this month is 30");
    }
    else
    printf("not a valid month number :");





    return 0;
}