#include<stdio.h>
int main()
{
    int a[10][10], i, j, r, c;
    int zero=0, nonzero=0;
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
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            if(a[i][j]==0)
            {
                zero++;
            }
        
        }
    }
    if(zero>(r*c)/2)
    {
        printf("The matrix is a sparse matrix.\n");
    }
    else
    {
        printf("The matrix is not a sparse matrix.\n");
    
    }
    return 0;
}

