#include <stdio.h>
int main()
{
    char ch;
    printf("Input the Character : ");

    while (scanf("%c", &ch) == 1)
    {
        getchar();
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            printf("The Character is Vowel.\n");
        }
        else
        {
            printf("The Character is Consonant\n");
        }
        printf("Input the Character again : \n");
    }

    return 0;
}
