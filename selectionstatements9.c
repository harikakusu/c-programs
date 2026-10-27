#include <stdio.h>

int main()
{
    float percentage;

    printf("Enter percentage: ");
    scanf("%f", &percentage);

    if (percentage > 85)
        printf("Grade: A");
    else if (percentage >= 75)
        printf("Grade: B");
    else if (percentage >= 65)
        printf("Grade: C");
    else if (percentage >= 55)
        printf("Grade: D");
    else if (percentage >= 45)
        printf("Grade: E");
    else
        printf("Grade: F");

    return 0;
}