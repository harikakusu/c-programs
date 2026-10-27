#include <stdio.h>

int main()
{
    float base, height, area;

    printf("Enter base and height: ");
    scanf("%f %f", &base, &height);

    area = base * height;

    printf("Area of parallelogram = %.2f", area);

    return 0;
}