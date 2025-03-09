#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    while (scanf("%d", &num) == 1)
    {
        int count = 0;
        for (int i = 2; i <= num - 1; i++)
        {
            if (num % i == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
            printf("The number %d is prime.\n", num);
        else
            printf("The number %d is not prime.\n", num);
    }
    return 0;
}
