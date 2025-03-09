#include <stdio.h>
int main()
{
    int num, prev, reminder;
    printf("Enter a number: ");
    while (scanf("%d", &num) == 1)
    {
        int digit = 0, result = 0;
        prev = num;
        while (num != 0)
        {
            digit++;
            num /= 10;
        }
        num = prev;
        while (num != 0)
        {
            reminder = num % 10;
            int power = 1;
            for (int i = 1; i <= digit; i++)
            {
                power *= reminder;
            }
            result += power;
            num /= 10;
        }
        if (prev == result)
        {
            printf("The number %d is an Armstrong number\n", prev);
        }
        else
        {
            printf("The number %d is not an Armstrong number\n", prev);
        }
        printf("Enter a number again: ");
    }
    return 0;
}
