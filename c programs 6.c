#include <stdio.h>

int main()
{
    float side, area;

    printf("Enter side: ");
    scanf("%f", &side);

    area = side * side;

    printf("Area of square = %.2f", area);

    return 0;
}