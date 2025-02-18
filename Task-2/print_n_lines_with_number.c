#include<stdio.h>
int main()
{
    int n;
    printf("Input number of lines: ");
    scanf("%d",&n);
    int num=1;
    for(int i = 0; i<n ; i++)
    {
        printf("%d %d %d\n",num,num+1,num+2);
        num+=4;
    }
    
    return 0;
}
