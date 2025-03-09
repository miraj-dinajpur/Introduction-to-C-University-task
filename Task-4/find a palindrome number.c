#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    while (scanf("%d", &num) == 1)
    {
        int rem;
        int pre = num;
        int sum = 0;

        while (num != 0)
        {
            rem = num % 10;
            sum = sum * 10 + rem;
            num = num / 10;
        }
        if (pre == sum)
            printf("The number %d is palindrome.\n", sum);
        else
            printf("The number %d is not palindrome.\n", sum);
    }
    return 0;
}

