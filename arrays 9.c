#include<stdio.h>
int main()
{
    int a[10][10], i, j, r, c;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The elements of the matrix are:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of the matrix is:\n");
    for(i = 0; i < c; i++)
    {
        for(j = 0; j < r; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
    return 0;
}