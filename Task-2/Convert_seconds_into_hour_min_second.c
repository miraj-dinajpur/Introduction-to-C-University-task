#include<stdio.h>
int main()
{
    int seconds, hr, min, sec;
    printf("Input seconds: ");
    scanf("%d",&seconds);
    hr = seconds/3600;
    seconds = seconds%3600;
    min = seconds/60;
    seconds = seconds%60;
    sec = seconds;
    printf("There are:\nH:M:S - %d:%d:%d",hr,min,sec);

    return 0;
}
