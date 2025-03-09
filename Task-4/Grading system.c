#include <stdio.h>
int main()
{
    int mark;
    printf("Enter the mark of a student: ");
    while (scanf("%d", &mark) == 1)
    {
        if (mark >= 80)
        {
            printf("A+\n");
        }
        else if (mark >= 75)
        {
            printf("A\n");
        }
        else if (mark >= 70)
        {
            printf("A-\n");
        }
        else if (mark >= 65)
        {
            printf("B+\n");
        }
        else if (mark >= 60)
        {
            printf("B\n");
        }
        else if (mark >= 55)
        {
            printf("B-\n");
        }
        else if (mark >= 50)
        {
            printf("C+\n");
        }
        else if (mark >= 45)
        {
            printf("C\n");
        }
        else if (mark >= 40)
        {
            printf("D\n");
        }
        else
        {
            printf("F\n");
        }
    }

    return 0;
}
