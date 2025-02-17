#include<stdio.h>
int main()
{
    float centigrade;
    printf("Write the temperature in Centigrade : ");
    scanf("%f",&centigrade);
    float fahrenheit = ((centigrade*9)/5)+32;
    printf("The Fahrenheit temperature is : %.2f",fahrenheit);
    return 0;
}
