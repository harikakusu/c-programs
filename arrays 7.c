#include<stdio.h>
int main()
{
    int a[10][10], n,i,j,trace=0;
    printf("enter the order of matrix: ");
    scanf("%d",&n);
    printf("Enter the elements of matrix: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        trace+=a[i][i];
    }
    printf("trace of matrix is: %d",trace);
    return 0;
}