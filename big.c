#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter Three Numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    if(a>b && a>c)
    {
        printf("First Number Is Big.");
    }
    else if(b>a && b>c)
    {
        printf("Second Number Is Big.");
    }
    else if(c>a && c>b)
    {
        printf("Third Number Is Big.");
    }
    else
    {
        printf("Both Numbers Are Equal.");
    }
    return 0;
}