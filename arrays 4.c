#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("Sum of array values = %d", sum);

    return 0;
}