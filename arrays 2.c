#include <stdio.h>

int main()
{
    int a[100], n, i;
    int evenSum = 0, oddSum = 0;
    int evenCount = 0, oddCount = 0;
    float evenAvg, oddAvg;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            evenSum = evenSum + a[i];
            evenCount++;
        }
        else
        {
            oddSum = oddSum + a[i];
            oddCount++;
        }
    }

    if(evenCount > 0)
    {
        evenAvg = (float)evenSum / evenCount;
        printf("Average of even numbers = %.2f\n", evenAvg);
    }
    else
        printf("No even numbers in the array\n");

    if(oddCount > 0)
    {
        oddAvg = (float)oddSum / oddCount;
        printf("Average of odd numbers = %.2f\n", oddAvg);
    }
    else
        printf("No odd numbers in the array\n");

    return 0;
}