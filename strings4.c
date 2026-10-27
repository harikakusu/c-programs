#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];

    printf("Enter a string: ");
    scanf("%s", name);

    strrev(name);

    printf("Reverse string = %s", name);

    return 0;
}