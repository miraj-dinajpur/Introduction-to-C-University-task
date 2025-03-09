#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    while (scanf("%d", &num) == 1)
    {
        int firstD, lastD;
        int rem;
        firstD = num % 10;
        while (num != 0)
        {
            rem = num % 10;
            num = num / 10;
        }
        lastD = rem;

        printf("The addition of First and last digit is: %d\n", firstD + lastD);
    }
    return 0;
}
