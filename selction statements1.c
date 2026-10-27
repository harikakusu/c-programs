#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("The given number is positive.");
    }

    return 0;
}