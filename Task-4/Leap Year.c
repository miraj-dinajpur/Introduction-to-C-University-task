#include<stdio.h>
int main()
{
    int year;
    printf("Enter a Year : ");
    while(scanf("%d",&year) == 1)
    {
        if((year%4==0 && year%100!=0)||year%400==0)
        {
            printf("The year %d is a Leap year\n",year);
        }
        else
        {
            printf("The year %d is not a Leap year\n",year);
        }
    }

    return 0;
}
