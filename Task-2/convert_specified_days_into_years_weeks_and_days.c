#include<stdio.h>
int main()

    int givendays;
    scanf("%d",&givendays);
    int year,week,day;
    year= givendays/365;
    givendays = givendays%365;
    week = (givendays/7);
    givendays = givendays%7;
    day = givendays;

    printf("Year: %d\nWeeks: %d\nDays: %d\n",year,week,day);


    return 0;
}
