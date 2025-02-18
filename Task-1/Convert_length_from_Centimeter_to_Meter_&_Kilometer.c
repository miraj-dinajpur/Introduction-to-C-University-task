#include<stdio.h>
float Cnvrt_meter(float val)
{
    return val/100;
}
float Cnvrt_kilometer(float val)
{
    return val/100000;
}
int main()
{
    float centimeter;
    printf("Input the Length : ");
    scanf("%f",&centimeter);
    float meter = Cnvrt_meter(centimeter);
    float kilometer = Cnvrt_kilometer(centimeter);
    printf("Length converted to meter : %.3f\n",meter);
    printf("Length converted to kilometer : %.3f\n",kilometer);

    return 0;
}
