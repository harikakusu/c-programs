#include<stdio.h>
int main(void)
{
int a[5], i, j,min,temp,n;
printf("Enter the values of array");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)	
{
    min=i;
    for(j=i+1;j<n;j++)
    {
        if(a[j]<a[min])
        min=j;
     } 
    }
    if(i!=min)
    {
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }

    return 0;
}
