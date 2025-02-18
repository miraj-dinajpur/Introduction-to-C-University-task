#include<stdio.h>
int main()
{
    int distance;
    float fuel, avg_consumption;
    printf("Input total distance in km: ");
    scanf("%d",&distance);
    printf("Input total fuel spent in liters: ");
    scanf("%f",&fuel);
    avg_consumption = distance / fuel;
    printf("Average consumption (km/lt) %.3f",avg_consumption);

    return 0;
}
