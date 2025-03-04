/*Write a c program to check if a number is odd or even*/

#include<stdio.h>
int main()
{
    int num;

    printf("Input The Number : ");
    while(scanf("%d",&num)== 1)
    {

        if(num%2==0)
        {
            printf("The Number is Even\n");
        }
        else
        {
            printf("The Number is Odd\n");
        }
        printf("Input The Number again : \n");
    }
    return 0;
}
