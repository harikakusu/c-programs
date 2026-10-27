#include <stdio.h>

int main()
{
    char name[100];
    int i, s=0;

    printf("Enter your name: ");
    scanf("%s", name);

    for(i=0; name[i]!='\0'; i++)
    {
        s++;
    }

    for(i=s-1; i>=0; i--)
    {
        printf("%c", name[i]);
    }

    return 0;
}