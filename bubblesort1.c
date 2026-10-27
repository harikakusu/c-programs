#include <stdio.h>

int main(void)
{
    int a[6];
    int i, j, temp, n;
    i=0;
#
    printf("enter the number of values in array: ");
    scanf("%d", &n);

    printf("enter the values in array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}





