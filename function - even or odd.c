#include <stdio.h>
#include <stdlib.h>

int evod(int x)
{
    if (x%2==0)
    {
        printf("%d is an even number",x);
    }
    else
    {
        printf("%d is an odd number",x);
    }
    return;
}

int main()
{
    int num1;

    printf("Please enter a number to find if they're even or odd:\n");
    scanf("%d",&num1);

    printf("%d",evod(num1));

    return 0;
}
