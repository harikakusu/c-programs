#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("AND = %d\n", (a > 0 && b > 0));
    printf("OR = %d\n", (a > 0 || b > 0));
    printf("NOT = %d\n", !(a > 0));

    return 0;
}